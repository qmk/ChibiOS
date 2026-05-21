##############################################################################
# Build global options
# NOTE: Can be overridden externally.
#

# Compiler options here.
ifeq ($(USE_OPT),)
  USE_OPT = -O2 -ggdb -fomit-frame-pointer -falign-functions=16
endif

# C specific options here (added to USE_OPT).
ifeq ($(USE_COPT),)
  USE_COPT =
endif

# C++ specific options here (added to USE_OPT).
ifeq ($(USE_CPPOPT),)
  USE_CPPOPT = -fno-rtti
endif

# Enable this if you want the linker to remove unused code and data.
ifeq ($(USE_LINK_GC),)
  USE_LINK_GC = yes
endif

# Linker extra options here.
ifeq ($(USE_LDOPT),)
  USE_LDOPT =
endif

# Enable this if you want link time optimizations (LTO).
ifeq ($(USE_LTO),)
  USE_LTO = no
endif

# If enabled, this option allows to compile the application in THUMB mode.
ifeq ($(USE_THUMB),)
  USE_THUMB = no
endif

# Enable this if you want to see the full log while compiling.
ifeq ($(USE_VERBOSE_COMPILE),)
  USE_VERBOSE_COMPILE = no
endif

# If enabled, this option makes the build process faster by not compiling
# modules not used in the current configuration.
ifeq ($(USE_SMART_BUILD),)
  USE_SMART_BUILD = yes
endif

#
# Build global options
##############################################################################

##############################################################################
# Architecture or project specific options
#

# Stack size to be allocated to the ARM System/User stack. This stack is
# the stack used by the main() function before the RTOS is enabled.
ifeq ($(USE_SYSTEM_STACKSIZE),)
  USE_SYSTEM_STACKSIZE = 0x800
endif

# Stack size to the allocated to the ARM IRQ stack.
ifeq ($(USE_IRQ_STACKSIZE),)
  USE_IRQ_STACKSIZE = 0x400
endif

# Stack size to the allocated to the ARM FIQ stack.
ifeq ($(USE_FIQ_STACKSIZE),)
  USE_FIQ_STACKSIZE = 0x100
endif

# Stack size to the allocated to the ARM Supervisor stack.
ifeq ($(USE_SUPERVISOR_STACKSIZE),)
  USE_SUPERVISOR_STACKSIZE = 0x100
endif

# Stack size to the allocated to the ARM Undefined stack.
ifeq ($(USE_UND_STACKSIZE),)
  USE_UND_STACKSIZE = 0x100
endif

# Stack size to the allocated to the ARM Abort stack.
ifeq ($(USE_ABT_STACKSIZE),)
  USE_ABT_STACKSIZE = 0x100
endif

# Enables the use of FPU.
ifeq ($(USE_FPU),)
  USE_FPU = no
endif

#
# Architecture or project specific options
##############################################################################

##############################################################################
# Project, target, sources and paths
#

# Define project name here.
PROJECT = ch

# Target settings.
MCU = cortex-r8

# Imported source files and paths.
CHIBIOS  := ../../..
CONFDIR  := ./cfg
BUILDDIR := ./build
DEPDIR   := ./.dep

# Licensing files.
include $(CHIBIOS)/os/license/license.mk
# Startup files.
include $(CHIBIOS)/os/common/startup/ARMCRx/compilers/GCC/mk/startup_armcr8.mk
# HAL-OSAL files (optional).
#include $(CHIBIOS)/os/hal/hal.mk
#include $(CHIBIOS)/os/hal/osal/rt-nil/osal.mk
# RTOS files (optional).
include $(CHIBIOS)/os/rt/rt.mk
include $(CHIBIOS)/os/common/ports/ARMv7-R/compilers/GCC/mk/port.mk
# Auto-build files in ./source recursively.
include $(CHIBIOS)/tools/mk/autobuild.mk
# Other files (optional).
#include $(CHIBIOS)/os/test/test.mk
#include $(CHIBIOS)/test/rt/rt_test.mk
#include $(CHIBIOS)/test/oslib/oslib_test.mk

# Define linker script file here.
LDSCRIPT = $(STARTUPLD)/ARMCR8_GENERIC.ld

# C sources that can be compiled in ARM or THUMB mode depending on the global
# setting.
CSRC = $(ALLCSRC) \
       $(TESTSRC) \
       main.c

# C++ sources that can be compiled in ARM or THUMB mode depending on the global
# setting.
CPPSRC = $(ALLCPPSRC)

# C sources to be compiled in ARM mode regardless of the global setting.
ACSRC =

# C++ sources to be compiled in ARM mode regardless of the global setting.
ACPPSRC =

# C sources to be compiled in THUMB mode regardless of the global setting.
TCSRC =

# C++ sources to be compiled in THUMB mode regardless of the global setting.
TCPPSRC =

# List ASM source files here.
ASMSRC = $(ALLASMSRC)

# List ASM with preprocessor source files here.
ASMXSRC = $(ALLXASMSRC)

# Inclusion directories.
INCDIR = $(CONFDIR) $(ALLINC) $(TESTINC)

# ARM-specific options here.
AOPT = -marm

# THUMB-specific options here.
TOPT = -mthumb -DTHUMB

# Define C warning options here.
CWARN = -Wall -Wextra -Wundef -Wstrict-prototypes

# Define C++ warning options here.
CPPWARN = -Wall -Wextra -Wundef

#
# Project, target, sources and paths
##############################################################################

##############################################################################
# Start of user section
#

# List all user C define here, like -D_DEBUG=1
UDEFS = -DARMCR8_HAS_GIC=1                                   \
        -DGIC_INTERFACE_BASE=0xAE000100U                      \
        -DGIC_DISTRIBUTOR_BASE=0xAE001000U

# The generic Renode Cortex-R8 model has an FPU. When the demo is built with
# USE_FPU enabled then declare the generic device as FPU-capable.
ifneq ($(USE_FPU),no)
  UDEFS += -DARMCR8_HAS_FPU=1
endif

# Define ASM defines here
UADEFS =

# List all user directories here
UINCDIR =

# List the user directory to look for the libraries here
ULIBDIR =

# List all user libraries here
ULIBS =

#
# End of user section
##############################################################################

##############################################################################
# Common rules
#

RULESPATH = $(CHIBIOS)/os/common/startup/ARMCRx/compilers/GCC
include $(RULESPATH)/mk/arm-none-eabi.mk
include $(RULESPATH)/mk/rules.mk

#
# Common rules
##############################################################################
