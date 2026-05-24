# Clock Tree Generator Notes

This generator is a work-in-progress restart point for STM32 clock tree
generation. It does not need to support the old XML format.

## Files

- Main template: `tools/ftl/processors/clocktree/clocktree.h.ftl`
- Codegen library: `tools/ftl/libs/libclocks.ftlc`
- Schema: `tools/ftl/schema/clocks/clocktree.xsd`
- G4 test XML: `os/hal/ports/STM32/STM32G4xx_TEST/cfg/clocktree.xml`
- Generated header: `os/hal/ports/STM32/STM32G4xx_TEST/clocktree.h`
- Prototype HAL port: `os/hal/ports/STM32/STM32G4xx_TEST`
- Stable build target:
  `demos/STM32/RT-STM32-MULTI/make/stm32g474re_nucleo64_clocktree.make`

## Template Setup

The `.ftl` file is intentionally mostly text and delegates logic to
`libclocks.ftlc`. Do not use mixed syntax in `.ftl`; codegen code should stay in
`.ftlc` library functions and macros.

FMPP does not differentiate between `.ftl` and `.ftlc`, and FMPP-specific
directives are expected to work in both. If `.ftlc` syntax unexpectedly fails,
first verify that the FMPP installation is using the latest freemarker-codegen
jar.

## Current XML Model

- `settings/prefixes` provides clock point, macro, and configuration prefixes.
- `settings/suffixes` provides frequency, nominal source frequency,
  current-clock, value, bits, selector, enable, and derived enabled-state
  suffixes. The current-clock suffix is optional and defaults to `_CLOCK`; the
  nominal source frequency suffix is optional and defaults to `_SOURCE_FREQ`.
- `settings/configs/config` provides arbitrary pre-compile settings emitted in
  XML order.
- Generic configurations currently support `bool`, `value`, `set`, and `raw`
  types. `bool`, constrained `value`, and `set` configurations emit generated
  compile-time checks.
- Semantic generator settings are marked by `role`; `CLOCK_DYNAMIC` is a
  generic boolean config name with role `dynamic_mode`, emitted using the
  configured configuration prefix.
- Clock `enable` is required and currently accepts `manual`, `auto`, `always`,
  and `never`.
- Clock `dynamic` is required and marks membership in the dynamic clock point
  set, independently from enable mode.
- Root clock points can be modeled in the optional top-level `sources` list.
  A source emits one clock point but has no upstream input; it can still use
  a fixed `frequency` attribute or conditional `<frequencies>` table, enable
  modes, bits, and limits. Source points cannot use an input clock.
- Source-style points emit a nominal source-frequency macro, independent from
  the enable state. Fixed sources use their fixed expression. Conditional
  `<frequencies>` sources use the fallback/default frequency, representing the
  post-reset value for complex sources.
- Formula or pass-through clock points under `clocks` use `<derived>`. A
  derived point can specify an optional `input` plus a fixed `frequency`
  expression or conditional `<frequencies>` table.
- Fixed hardware dividers with no selectable register field should also be
  modeled as `<derived>` frequency expressions. Use `<divider>` only when the
  divider value is configurable and emits selection bits.
- Terminal peripheral users are modeled in the optional top-level `sinks`
  list. A sink names an input clock point and may specify a preprocessor
  `condition`; active sinks create downstream demand for `auto` clock
  points without becoming clock points themselves. An `auto` clock point with
  no downstream clock point or explicit sink is treated as unconditionally
  demanded; add sinks only when demand has a condition. Sinks can also
  specify optional `<limits ref="..."/>` references when a peripheral imposes
  a frequency range on the consumed clock.
- `settings/states`, `settings/limit-set`, and `settings/limit-values` define
  the selectable frequency limit states, the final limit macro set, and the
  state-specific values. The generator validates that each state provides all
  required final limits.
- Conditional state-specific limits use ordered `<case when="..."/>` elements
  followed by exactly one `<default/>` fallback. Simple unconditional limits can
  still use direct `min` and `max` attributes on the `<limit>` element.
- Clock points can specify optional `<limits ref="..."/>` references to final
  limit names. The generator emits the selected `<limit>_MIN` and `<limit>_MAX`
  definitions and uses them for frequency range checks. Disabled clock points
  are not range-checked.
- Mux inputs and scaler choices use nested `<bits value="..."/>` elements, not
  bits attributes.
- Bits elements can specify optional `mask` metadata. The generator uses masks
  to reject nested selections that OR two fields for the same target and mask.
  Masks are required when a target can receive bits from multiple XML levels.
- Divider and multiplier nodes must specify their input clock point.
- Mux, divider, and multiplier inputs are checked against the declared clock
  points.
- Selection bits for scaler values can use `%N%` as the configured numeric
  value placeholder.

## Generated Contract

Each source and clock point should emit, in XML order, with sources emitted
before clocks:

- configuration settings where applicable;
- an `<POINT><enabled-suffix>` macro;
- an `<POINT>_BITS` macro;
- an `<POINT><frequency-suffix>` macro, with disabled clocks producing zero
  frequency;
- an `<POINT><current-clock-suffix>` macro. For dynamic clock points this uses
  `hal_lld_get_clock_point(CLK_<POINT>)`; the static-mode getter macro resolves
  that expression to the static frequency macro when dynamic mode is disabled;
- compile-time value checks for generated configuration settings;
- grouped state-specific frequency limit definitions and one selected final
  limit block where a limit model is declared;
- compile-time frequency range checks where clock point limits are declared.
- compile-time frequency range checks where active sink limits are
  declared.

Generic configurations emit explicit settings using the configured
configuration prefix and their local names, for example `CLOCK_DYNAMIC` becomes
`STM32_CFG_CLOCK_DYNAMIC`. Manual clock points emit explicit configuration
settings using the configured configuration prefix and enable suffix, for example
`STM32_CFG_HSI16_ENABLE`. Manual clock points default to `FALSE` unless the
clock point explicitly specifies `default="TRUE"`. Auto clock points derive
enablement from downstream use. Always and never clock points still emit their
own enabled flags for uniformity.

Clock definitions with enable-state bits use a clock-level `<bits enabled="..."
disabled="..."/>` element. Those bits are combined with selection bits when the
clock has a mux/divider/multiplier selection.

## Dynamic Reconfiguration Contract

Dynamic mode is intentionally not a promise that every RCC selector can be
changed arbitrarily at runtime. The XML describes the static clock topology and
the startup/default selector configuration. Dynamic reconfiguration code may
change the frequency of supported dynamic clock points, but the new runtime
configuration must remain compatible with that static topology.

In particular, runtime clock changes must not disable or invalidate sources
selected by statically configured peripheral muxes. Peripheral drivers normally
read their effective clock when started; they do not own or change those RCC
selectors. The dynamic update path is therefore expected to recalculate
effective frequencies for the supported dynamic points, while user/HAL clock
management code is responsible for choosing runtime configurations that still
preserve the configured peripheral clock sources.

Do not mark a clock point as dynamic just because its register field exists.
Use dynamic points only where the port provides a readback/recalculation path
and where runtime changes are part of the supported clock-management API.

## Clock Demand Modeling Procedure

Use `enable="always"` only for clock points that are intrinsically required by
the platform or that intentionally represent an unconditional configuration
selection. Core clocks such as `SYSCLK`, `HCLK`, `PCLKx`, and mandatory helper
points normally stay always-enabled.

Use `enable="auto"` for optional peripheral clocks and intermediate helper
clocks. Auto clocks are enabled when a downstream clock point or explicit
sink demands them. This avoids optional peripherals accidentally enabling or
requiring upstream oscillators.

Use one sink per independent reason to demand a clock. This keeps generated
`<POINT>_ENABLED` expressions readable and diagnostics meaningful. Prefer two
sinks over one large condition when two drivers or features can require the
same clock.

Driver-owned peripheral clocks should use existing HAL and STM32 instance
switches in their sink conditions. Examples:

```xml
<sink name="SPI1_DRIVER" input="SPI1"
          condition="(HAL_USE_SPI == TRUE) &amp;&amp; (STM32_SPI_USE_SPI1 == TRUE)">
  <description>SPI driver demands the SPI1 clock when enabled.</description>
</sink>

<sink name="USB1_DRIVER" input="USB"
          condition="(HAL_USE_USB == TRUE) &amp;&amp; (STM32_USB_USE_USB1 == TRUE)">
  <description>USB driver demands the USB clock when enabled.</description>
  <limits ref="USBCLK" />
</sink>
```

Use sink limits for requirements belonging to a specific peripheral use,
such as USB requiring a known clock range. Keep structural bus or oscillator
limits on the clock point itself. Sink limits are checked only when the
sink condition is active.

If several instances of one driver share a clock point, keep the driver part as
one AND term and OR only the instance switches inside the second term:

```xml
<sink name="ADCDAC_ADC_DRIVER" input="ADCDAC"
          condition="(HAL_USE_ADC == TRUE) &amp;&amp; ((STM32_ADC_USE_ADC1 == TRUE) || (STM32_ADC_USE_ADC2 == TRUE))">
  <description>ADC driver demands the ADCDAC clock when enabled.</description>
</sink>
```

If separate drivers can demand the same clock point, use separate sinks
instead of one top-level OR expression:

```xml
<sink name="ADCDAC_ADC_DRIVER" input="ADCDAC"
          condition="(HAL_USE_ADC == TRUE) &amp;&amp; ((STM32_ADC_USE_ADC1 == TRUE) || (STM32_ADC_USE_ADC2 == TRUE))">
  <description>ADC driver demands the ADCDAC clock when enabled.</description>
</sink>
<sink name="ADCDAC_DAC_DRIVER" input="ADCDAC"
          condition="(HAL_USE_DAC == TRUE) &amp;&amp; ((STM32_DAC_USE_DAC1_CH1 == TRUE) || (STM32_DAC_USE_DAC1_CH2 == TRUE))">
  <description>DAC driver demands the ADCDAC clock when enabled.</description>
</sink>
```

For clocks not owned by an existing driver setting, add a local boolean
configuration named `<POINT>_REQUIRED` using the configured configuration
prefix in generated code. The XML config name does not include the prefix:

```xml
<config name="OCTOSPI_REQUIRED" type="bool" default="FALSE">
  <description>Enables demand for the OCTOSPI clock.</description>
</config>

<sink name="OCTOSPI_REQUIRED" input="OCTOSPI"
          condition="STM32_CFG_OCTOSPI_REQUIRED == TRUE">
  <description>Local option demands the OCTOSPI clock when enabled.</description>
</sink>
```

Derived helper clocks such as intermediate muxes and dividers should usually be
`auto` and have no direct sink. They become enabled through downstream
dependencies. For example, an intermediate divided clock used only by USB should
be demanded by the USB clock point, not by its own local option.

Clock points with no defined sinks are treated as unconditionally demanded.
This is useful for always-present generated outputs but means optional
peripheral clocks must have sinks if their demand is conditional.

Use `NONE` inputs only for real selectable no-clock mux values, such as output
pin clocks or backup-domain selectors that explicitly support a no-clock
selection. Do not use `NONE` to model a disabled peripheral selector encoding.

If a disabled peripheral clock requires register selector bits, put those bits
in clock-level disabled bits:

```xml
<clock point="RNG" enable="auto" dynamic="no">
  <description>RNG clock</description>
  <bits enabled="0U" disabled="RCC_CCIPR2_RNGSEL_IGNORE" />
  <mux name="RNG">
    <input point="HSI48"><bits value="RCC_CCIPR2_RNGSEL_HSI48" /></input>
    <input point="MSIK" default="yes"><bits value="RCC_CCIPR2_RNGSEL_MSIK" /></input>
  </mux>
</clock>
```

Expression style matters. Sink conditions are parsed by generator helpers
for formatting and diagnostics, so keep them simple:

- Good: `(HAL_USE_SPI == TRUE) && (STM32_SPI_USE_SPI1 == TRUE)`
- Good: `(HAL_USE_ADC == TRUE) && ((STM32_ADC_USE_ADC1 == TRUE) || (STM32_ADC_USE_ADC2 == TRUE))`
- Avoid: one large top-level OR expression combining unrelated drivers.

When converting an existing clock point to conditional demand:

- Change the clock point from `enable="always"` to `enable="auto"`.
- Add a driver sink or a local `<POINT>_REQUIRED` config plus sink.
- Keep intermediate helper clocks `auto` and let downstream dependencies demand
  them.
- Move disabled-state selector values from fake `NONE` inputs to clock-level
  disabled bits unless no-clock is a real mux selection.
- Regenerate and inspect the affected `<POINT>_ENABLED` macros.
- Inspect upstream dependency checks to ensure they are conditional on the new
  enabled macro.
- Inspect affected `<POINT>_BITS` macros if disabled register bits are involved.
- Inspect affected `<POINT>_FREQ` macros and confirm disabled clocks produce
  `0U`.
- Run XML validation, FMPP generation, and the clocktree test suite.

## Validation Commands

Regenerate the test header:

```sh
fmpp -C os/hal/ports/STM32/STM32G4xx_TEST/cfg/config.fmpp
```

Validate the XML:

```sh
xmllint --noout --schema tools/ftl/schema/clocks/clocktree.xsd \
  os/hal/ports/STM32/STM32G4xx_TEST/cfg/clocktree.xml
```

Build the stable compile target:

```sh
make -C demos/STM32/RT-STM32-MULTI \
  -f make/stm32g474re_nucleo64_clocktree.make -j2
make -C demos/STM32/RT-STM32-MULTI \
  -f make/stm32g474re_nucleo64_clocktree.make clean
```

The Eclipse configuration is named:
`Build for STM32G474RE-Nucleo64 Clocktree`.

## Current Prototype State

`STM32G4xx_TEST/hal_lld.h` includes the generated `clocktree.h` after static
RCC/PWR/platform definitions and provides compatibility aliases expected by
existing STM32 LLD drivers. `STM32G4xx_TEST/hal_lld.c` is only a compile/link
stub for now; it is not execution-ready.

The immediate goal is to make the generated header progressively replace the
handwritten clock macro layer while preserving the legacy macro interface that
drivers consume.
