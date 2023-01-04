/*
    ChibiOS - Copyright (C) 2006..2023 Giovanni Di Sirio

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
 * @file    oop_sequential_stream.h
 * @brief   Sequential data streams class.
 * @details This header an abstract class useful to accessing generic
 *          data streams in a standardized way.
 *
 * @addtogroup OOP_SEQUENTIAL_STREAM
 * @details This module define an abstract class for generic sequential
 *          data streams.<br>
 *          Streams allow to exchange data with unspecified objects through
 *          a standard interface.
 * @note    This class is compatible with legacy HAL @p BaseSequentialStream.
 * @{
 */

#ifndef OOP_SEQUENTIAL_STREAM_H
#define OOP_SEQUENTIAL_STREAM_H

#include "oop_base_object.h"

/**
 * @name    Streams return codes
 * @{
 */
#define STM_OK               MSG_OK
#define STM_TIMEOUT          MSG_TIMEOUT
#define STM_RESET            MSG_RESET
/** @} */

/**
 * @brief   Type of a base sequential stream class.
 */
typedef struct base_sequential_stream base_sequential_stream_c;

/**
 * @brief   @p base_sequential_stream_c specific methods.
 */
#define __base_sequential_stream_methods                                    \
  __base_object_methods                                                     \
  /* Stream write buffer method.*/                                          \
  size_t (*write)(void *instance, const uint8_t *bp, size_t n);             \
  /* Stream read buffer method.*/                                           \
  size_t (*read)(void *instance, uint8_t *bp, size_t n);                    \
  /* Channel put method, blocking.*/                                        \
  msg_t (*put)(void *instance, uint8_t b);                                  \
  /* Channel get method, blocking.*/                                        \
  msg_t (*get)(void *instance);

/**
 * @brief   @p base_sequential_stream_c specific data.
 */
#define __base_sequential_stream_data

/**
 * @brief   @p base_sequential_stream_c virtual methods table.
 */
struct base_sequential_stream_vmt {
  __base_sequential_stream_methods
};

/**
 * @brief   Structure representing a base sequential stream class.
 */
struct base_sequential_stream {
  /**
   * @brief   Virtual Methods Table.
   */
  const struct base_sequential_stream_vmt   *vmt;
  __base_sequential_stream_data
};

/**
 * @name    Methods implementations
 * @{
 */
/**
 * @brief   Object creation implementation.
 *
 * @param[out] ip       Pointer to a @p base_sequential_stream_c structure
 *                      to be initialized.
 * @param[in] vmt       VMT pointer for the new object.
 * @return              A new reference to the object.
 */
CC_FORCE_INLINE
static inline void *__base_sequential_stream_objinit_impl(void *ip,
                                                          const void *vmt) {
  base_sequential_stream_c *objp = (base_sequential_stream_c *)ip;

  objp->vmt = (struct base_sequential_stream_vmt *)vmt;

  return ip;
}

/**
 * @brief   Object finalization implementation.
 *
 * @param[in] ip        Pointer to a @p base_sequential_stream_c structure
 *                      to be disposed.
 */
CC_FORCE_INLINE
static inline void __base_sequential_stream_dispose_impl(void *ip) {

  (void) ip;

  /* Nothing.*/
}
/** @} */

/**
 * @name    Macro Functions (base_sequential_stream_c)
 * @{
 */
/**
 * @brief   Sequential Stream write.
 * @details The function writes data from a buffer to a stream.
 *
 * @param[in] ip        Pointer to a @p base_sequential_stream_c or derived
 *                      class.
 * @param[in] bp        Pointer to the data buffer.
 * @param[in] n         The maximum amount of data to be transferred.
 * @return              The number of bytes transferred. The return value can
 *                      be less than the specified number of bytes if an
 *                      end-of-file condition has been met.
 *
 * @api
 */
#define streamWrite(ip, bp, n) ((ip)->vmt->write(ip, bp, n))

/**
 * @brief   Sequential Stream read.
 * @details The function reads data from a stream into a buffer.
 *
 * @param[in] ip        Pointer to a @p base_sequential_stream_c or derived
 *                      class.
 * @param[out] bp       Pointer to the data buffer.
 * @param[in] n         The maximum amount of data to be transferred.
 * @return              The number of bytes transferred. The return value can
 *                      be less than the specified number of bytes if an
 *                      end-of-file condition has been met.
 *
 * @api
 */
#define streamRead(ip, bp, n) ((ip)->vmt->read(ip, bp, n))

/**
 * @brief   Sequential Stream blocking byte write.
 * @details This function writes a byte value to a channel. If the channel
 *          is not ready to accept data then the calling thread is suspended.
 *
 * @param[in] ip        Pointer to a @p base_sequential_stream_c or derived
 *                      class.
 * @param[in] b         The byte value to be written to the channel.
 * @return              The operation status.
 * @retval STM_OK       if the operation succeeded.
 * @retval STM_RESET    if an end-of-file condition has been met.
 *
 * @api
 */
#define streamPut(ip, b) ((ip)->vmt->put(ip, b))

/**
 * @brief   Sequential Stream blocking byte read.
 * @details This function reads a byte value from a channel. If the data
 *          is not available then the calling thread is suspended.
 *
 * @param[in] ip        Pointer to a @p base_sequential_stream_c or derived
 *                      class.
 * @return              A byte value from the queue.
 * @retval STM_RESET    if an end-of-file condition has been met.
 *
 * @api
 */
#define streamGet(ip) ((ip)->vmt->get(ip))
/** @} */

#endif /* OOP_SEQUENTIAL_STREAM_H */

/** @} */
