/*
    ChibiOS - Copyright (C) 2006-2026 Giovanni Di Sirio.

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/*
 * Generic Cortex-R8 memory setup.
 *
 * This file is intended for startup integration tests and early demos. Real
 * platforms should provide their own memory map.
 */

__und_stack_size__ = DEFINED(__und_stack_size__) ? __und_stack_size__ : 0x100;
__abt_stack_size__ = DEFINED(__abt_stack_size__) ? __abt_stack_size__ : 0x100;
__fiq_stack_size__ = DEFINED(__fiq_stack_size__) ? __fiq_stack_size__ : 0x100;
__irq_stack_size__ = DEFINED(__irq_stack_size__) ? __irq_stack_size__ : 0x400;
__svc_stack_size__ = DEFINED(__svc_stack_size__) ? __svc_stack_size__ : 0x100;
__sys_stack_size__ = DEFINED(__sys_stack_size__) ? __sys_stack_size__ : 0x800;

MEMORY
{
    flash0 (rx) : org = DEFINED(FLASH_ORIGIN) ? FLASH_ORIGIN : 0x00000000,
                  len = DEFINED(FLASH_LEN) ? FLASH_LEN : 1M
    flash1 (rx) : org = 0x00000000, len = 0
    flash2 (rx) : org = 0x00000000, len = 0
    flash3 (rx) : org = 0x00000000, len = 0
    flash4 (rx) : org = 0x00000000, len = 0
    flash5 (rx) : org = 0x00000000, len = 0
    flash6 (rx) : org = 0x00000000, len = 0
    flash7 (rx) : org = 0x00000000, len = 0
    ram0   (wx) : org = DEFINED(RAM_ORIGIN) ? RAM_ORIGIN : 0x00100000,
                  len = DEFINED(RAM_LEN) ? RAM_LEN : 256k
    ram1   (wx) : org = 0x00000000, len = 0
    ram2   (wx) : org = 0x00000000, len = 0
    ram3   (wx) : org = 0x00000000, len = 0
    ram4   (wx) : org = 0x00000000, len = 0
    ram5   (wx) : org = 0x00000000, len = 0
    ram6   (wx) : org = 0x00000000, len = 0
    ram7   (wx) : org = 0x00000000, len = 0
}

/* For each data/text section two region are defined, a virtual region
   and a load region (_LMA suffix).*/

/* Flash region to be used for exception vectors.*/
REGION_ALIAS("VECTORS_FLASH", flash0);
REGION_ALIAS("VECTORS_FLASH_LMA", flash0);

/* Flash region to be used for constructors and destructors.*/
REGION_ALIAS("XTORS_FLASH", flash0);
REGION_ALIAS("XTORS_FLASH_LMA", flash0);

/* Flash region to be used for code text.*/
REGION_ALIAS("TEXT_FLASH", flash0);
REGION_ALIAS("TEXT_FLASH_LMA", flash0);

/* Flash region to be used for read only data.*/
REGION_ALIAS("RODATA_FLASH", flash0);
REGION_ALIAS("RODATA_FLASH_LMA", flash0);

/* Flash region to be used for various.*/
REGION_ALIAS("VARIOUS_FLASH", flash0);
REGION_ALIAS("VARIOUS_FLASH_LMA", flash0);

/* Flash region to be used for RAM(n) initialization data.*/
REGION_ALIAS("RAM_INIT_FLASH_LMA", flash0);

/* RAM region to be used for the banked mode stacks.*/
REGION_ALIAS("STACKS_RAM", ram0);
REGION_ALIAS("C1_STACKS_RAM", ram0);

/* RAM region to be used for data segment.*/
REGION_ALIAS("DATA_RAM", ram0);
REGION_ALIAS("DATA_RAM_LMA", flash0);

/* RAM region to be used for BSS segment.*/
REGION_ALIAS("BSS_RAM", ram0);

/* RAM region to be used for the default heap.*/
REGION_ALIAS("HEAP_RAM", ram0);

/* Stack rules inclusion.*/
INCLUDE rules_stacks.ld
INCLUDE rules_stacks_c1.ld

/* Code rules inclusion.*/
INCLUDE rules_code.ld

/* Data rules inclusion.*/
INCLUDE rules_data.ld

/* Memory rules inclusion.*/
INCLUDE rules_memory.ld
