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

/**
 * @file    vectors.S
 * @brief   ARMv7-R exception vectors.
 *
 * @addtogroup ARMCRx_GCC_VECTORS
 * @{
 */

#if !defined(__DOXYGEN__)

                .syntax unified
                .section .vectors, "ax"
                .arm
                .align  5

                .global _start
                .global _vectors
_start:
_vectors:
                ldr     pc, .Lreset
                ldr     pc, .Lundefined
                ldr     pc, .Lswi
                ldr     pc, .Lprefetch
                ldr     pc, .Labort
                nop
                ldr     pc, .Lirq
                ldr     pc, .Lfiq

.Lreset:        .word   Reset_Handler
.Lundefined:    .word   Und_Handler
.Lswi:          .word   Swi_Handler
.Lprefetch:     .word   Prefetch_Handler
.Labort:        .word   Abort_Handler
.Lirq:          .word   Irq_Handler
.Lfiq:          .word   Fiq_Handler

                .text
                .arm
                .align  2

                .weak   Reset_Handler
Reset_Handler:
                b       _crt0_entry

                .weak   Und_Handler
Und_Handler:
                .weak   Swi_Handler
Swi_Handler:
                .weak   Prefetch_Handler
Prefetch_Handler:
                .weak   Abort_Handler
Abort_Handler:
                .weak   Irq_Handler
Irq_Handler:
                .weak   Fiq_Handler
Fiq_Handler:
                .weak   _unhandled_exception
_unhandled_exception:
                b       _unhandled_exception

#endif /* !defined(__DOXYGEN__) */

/** @} */
