# List of the ChibiOS/RT ARMv7-R generic port files.

# Dependencies.
include $(CHIBIOS)/os/common/portability/GCC/ccportab.mk
include $(CHIBIOS)/os/common/ports/ARM-common/arm-common.mk

PORTSRC = $(CHIBIOS)/os/common/ports/ARMv7-R/chcore.c

PORTASM = $(CHIBIOS)/os/common/ports/ARMv7-R/compilers/GCC/chcoreasm.S

PORTINC = $(CHIBIOS)/os/common/ports/ARMv7-R

# Shared variables
ALLXASMSRC += $(PORTASM)
ALLCSRC    += $(PORTSRC)
ALLINC     += $(PORTINC)
