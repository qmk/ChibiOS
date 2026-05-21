CMSIS6 import notes
===================

This directory contains an experimental CMSIS 6 snapshot imported
side-by-side with the existing CMSIS 5 tree.

Imported components:
- CMSIS-Core(M) 6.1
- CMSIS-Core(A) 6.1
- CMSIS-Core(R) 6.0

The snapshot is intentionally not used through global include paths. New
ports should opt into it explicitly, starting with ARM Cortex-R support.
The existing os/common/ext/ARM/CMSIS directory is kept for compatibility
until CMSIS6 is proven with existing use cases.

Local policy:
- Keep vendor headers unmodified unless a ChibiOS-specific patch is
  explicitly recorded here.
- Do not include generic interrupt-controller sources such as
  Source/irq_ctrl_gic.c from architecture startup code.
- Select GIC, VIC, or custom interrupt-controller support in platform or
  port code, not in startup code.

Known import notes:
- r-profile/armv8r_cp15.h.h has a double .h suffix and is referenced by
  r-profile/armv8r.h with that name in this snapshot.
