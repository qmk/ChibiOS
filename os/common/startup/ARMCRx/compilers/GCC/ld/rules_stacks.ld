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

SECTIONS
{
    .stacks (NOLOAD) :
    {
        . = ALIGN(8);
        __und_stack_base__ = .;
        . += __und_stack_size__;
        . = ALIGN(8);
        __und_stack_end__ = .;

        __abt_stack_base__ = .;
        . += __abt_stack_size__;
        . = ALIGN(8);
        __abt_stack_end__ = .;

        __fiq_stack_base__ = .;
        . += __fiq_stack_size__;
        . = ALIGN(8);
        __fiq_stack_end__ = .;

        __irq_stack_base__ = .;
        . += __irq_stack_size__;
        . = ALIGN(8);
        __irq_stack_end__ = .;

        __svc_stack_base__ = .;
        . += __svc_stack_size__;
        . = ALIGN(8);
        __svc_stack_end__ = .;

        __sys_stack_base__ = .;
        __main_thread_stack_base__ = .;
        . += __sys_stack_size__;
        . = ALIGN(8);
        __sys_stack_end__ = .;
        __main_thread_stack_end__ = .;
    } > STACKS_RAM
}
