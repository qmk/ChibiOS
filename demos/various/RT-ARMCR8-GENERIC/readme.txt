*****************************************************************************
** ChibiOS/RT startup scaffold for ARM Cortex-R8.                          **
*****************************************************************************

** TARGET **

The demo targets a generic ARM Cortex-R8 device without HAL or RTOS support.

** The Demo **

This is a startup-only integration demo. It exercises the generic ARMCRx
startup files, the generic Cortex-R8 CMSIS device header and the generic
linker script.

** Build Procedure **

Run make from this directory.

** Notes **

The RTOS-related Makefile includes and main.c code are intentionally commented
out until the ARMv7-R port is available. The generic linker script can be
overridden by defining FLASH_ORIGIN, FLASH_LEN, RAM_ORIGIN and RAM_LEN from
the Makefile or command line.
