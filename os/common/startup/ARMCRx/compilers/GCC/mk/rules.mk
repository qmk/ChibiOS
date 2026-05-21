# ARM Cortex-Rx common makefile scripts and rules.

include $(CHIBIOS)/os/common/startup/ARM/compilers/GCC/rules.mk

# FPU options default.
ifeq ($(USE_FPU_OPT),)
  USE_FPU_OPT = -mfloat-abi=$(USE_FPU) -mfpu=vfpv3-d16
endif

# FPU-related options.
ifeq ($(USE_FPU),)
  USE_FPU = no
endif
ifneq ($(USE_FPU),no)
  OPT    += $(USE_FPU_OPT)
  DDEFS  += -DCORTEX_USE_FPU=TRUE
  DADEFS += -DCORTEX_USE_FPU=TRUE
else
  DDEFS  += -DCORTEX_USE_FPU=FALSE
  DADEFS += -DCORTEX_USE_FPU=FALSE
endif
