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

__c1_und_stack_size__   = DEFINED(__c1_und_stack_size__) ? __c1_und_stack_size__ : __und_stack_size__;
__c1_abt_stack_size__   = DEFINED(__c1_abt_stack_size__) ? __c1_abt_stack_size__ : __abt_stack_size__;
__c1_fiq_stack_size__   = DEFINED(__c1_fiq_stack_size__) ? __c1_fiq_stack_size__ : __fiq_stack_size__;
__c1_irq_stack_size__   = DEFINED(__c1_irq_stack_size__) ? __c1_irq_stack_size__ : __irq_stack_size__;
__c1_svc_stack_size__   = DEFINED(__c1_svc_stack_size__) ? __c1_svc_stack_size__ : __svc_stack_size__;
__c1_sys_stack_size__   = DEFINED(__c1_sys_stack_size__) ? __c1_sys_stack_size__ : __sys_stack_size__;

SECTIONS
{
    .c1_stacks (NOLOAD) :
    {
        . = ALIGN(8);
        __c1_und_stack_base__ = .;
        . += __c1_und_stack_size__;
        . = ALIGN(8);
        __c1_und_stack_end__ = .;

        __c1_abt_stack_base__ = .;
        . += __c1_abt_stack_size__;
        . = ALIGN(8);
        __c1_abt_stack_end__ = .;

        __c1_fiq_stack_base__ = .;
        . += __c1_fiq_stack_size__;
        . = ALIGN(8);
        __c1_fiq_stack_end__ = .;

        __c1_irq_stack_base__ = .;
        . += __c1_irq_stack_size__;
        . = ALIGN(8);
        __c1_irq_stack_end__ = .;

        __c1_svc_stack_base__ = .;
        . += __c1_svc_stack_size__;
        . = ALIGN(8);
        __c1_svc_stack_end__ = .;

        __c1_sys_stack_base__ = .;
        __c1_main_thread_stack_base__ = .;
        . += __c1_sys_stack_size__;
        . = ALIGN(8);
        __c1_sys_stack_end__ = .;
        __c1_main_thread_stack_end__ = .;
    } > C1_STACKS_RAM
}
