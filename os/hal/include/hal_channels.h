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
 * @file    hal_channels.h
 * @brief   I/O channels access.
 * @details This header defines an abstract interface useful to access generic
 *          I/O serial devices in a standardized way.
 *
 * @addtogroup HAL_IO_CHANNEL
 * @details This module defines an abstract interface for I/O channels by
 *          extending the @p base_sequential_stream_c interface.
 * @{
 */

#ifndef HAL_CHANNELS_H
#define HAL_CHANNELS_H

/**
 * @name    Default control operation codes.
 * @{
 */
#define CHN_CTL_INVALID         0   /**< @brief Invalid operation code.     */
#define CHN_CTL_NOP             1   /**< @brief Does nothing.               */
#define CHN_CTL_TX_WAIT         2   /**< @brief Wait for TX completion.     */
/** @} */

/**
 * @brief   Type of a base channel class.
 */
typedef struct base_channel base_channel_c;

/**
 * @brief   Type of a legacy base channel class.
 * @deprecated
 */
typedef base_channel_c BaseChannel;

/**
 * @brief   @p base_channel_c specific methods.
 */
#define __base_channel_methods                                              \
  __base_sequential_stream_methods                                          \
  size_t (*writet)(void *instance, const uint8_t *bp,                       \
                   size_t n, sysinterval_t time);                           \
  /* Channel read method with timeout specification.*/                      \
  size_t (*readt)(void *instance, uint8_t *bp, size_t n,                    \
                  sysinterval_t time);                                      \
  /* Channel put method with timeout specification.*/                       \
  msg_t (*putt)(void *instance, uint8_t b, sysinterval_t time);             \
  /* Channel get method with timeout specification.*/                       \
  msg_t (*gett)(void *instance, sysinterval_t time);                        \
  /* Channel write method with timeout specification.*/                     \
  /* Channel control method.*/                                              \
  msg_t (*ctl)(void *instance, unsigned int operation, void *arg);

/**
 * @brief   @p base_channel_c specific data.
 * @note    It is empty because @p BaseChannel is only an interface without
 *          implementation.
 */
#define __base_channel_data                                                 \
  __base_sequential_stream_data

/**
 * @brief   @p base_channel_c virtual methods table.
 */
struct base_channel_vmt {
  __base_channel_methods
};

/**
 * @brief   Structure representing a base channel class.
 */
struct base_channel {
  /**
   * @brief   Virtual Methods Table.
   */
  const struct base_channel_vmt *vmt;
  __base_channel_data
};

/**
 * @name    Methods implementations (base_channel_c)
 * @{
 */
/**
 * @brief   Object creation implementation.
 *
 * @param[out] ip       Pointer to a @p base_channel_c structure
 *                      to be initialized.
 * @param[in] vmt       VMT pointer for the new object.
 * @return              A new reference to the object.
 */
CC_FORCE_INLINE
static inline void *__base_channel_objinit_impl(void *ip, const void *vmt) {
  base_channel_c *objp = (base_channel_c *)ip;

  __base_sequential_stream_objinit_impl(objp, vmt);

  return objp;
}

/**
 * @brief   Object finalization implementation.
 *
 * @param[in] ip        Pointer to a @p base_channel_c structure
 *                      to be disposed.
 */
CC_FORCE_INLINE
static inline void __base_channel_dispose_impl(void *ip) {
  base_channel_c *objp = (base_channel_c *)ip;

  __base_object_dispose_impl(objp);
}
/** @} */

/**
 * @name    Macro Functions (base_channel_c)
 * @{
 */
/**
 * @brief   Channel blocking byte write with timeout.
 * @details This function writes a byte value to a channel. If the channel
 *          is not ready to accept data then the calling thread is suspended.
 *
 * @param[in] ip        pointer to a @p BaseChannel or derived class
 * @param[in] b         the byte value to be written to the channel
 * @param[in] time      the number of ticks before the operation timeouts,
 *                      the following special values are allowed:
 *                      - @a TIME_IMMEDIATE immediate timeout.
 *                      - @a TIME_INFINITE no timeout.
 *                      .
 * @return              The operation status.
 * @retval STM_OK       if the operation succeeded.
 * @retval STM_TIMEOUT  if the specified time expired.
 * @retval STM_RESET    if the channel associated queue (if any) was reset.
 *
 * @api
 */
#define chnPutTimeout(ip, b, time) ((ip)->vmt->putt(ip, b, time))

/**
 * @brief   Channel blocking byte read with timeout.
 * @details This function reads a byte value from a channel. If the data
 *          is not available then the calling thread is suspended.
 *
 * @param[in] ip        pointer to a @p BaseChannel or derived class
 * @param[in] time      the number of ticks before the operation timeouts,
 *                      the following special values are allowed:
 *                      - @a TIME_IMMEDIATE immediate timeout.
 *                      - @a TIME_INFINITE no timeout.
 *                      .
 * @return              A byte value from the queue.
 * @retval STM_TIMEOUT  if the specified time expired.
 * @retval STM_RESET    if the channel associated queue (if any) has been
 *                      reset.
 *
 * @api
 */
#define chnGetTimeout(ip, time) ((ip)->vmt->gett(ip, time))

/**
 * @brief   Channel blocking write.
 * @details The function writes data from a buffer to a channel. If the channel
 *          is not ready to accept data then the calling thread is suspended.
 *
 * @param[in] ip        pointer to a @p BaseChannel or derived class
 * @param[out] bp       pointer to the data buffer
 * @param[in] n         the maximum amount of data to be transferred
 *
 * @return              The number of bytes transferred.
 *
 * @api
 */
#define chnWrite(ip, bp, n) streamWrite(ip, bp, n)

/**
 * @brief   Channel blocking write with timeout.
 * @details The function writes data from a buffer to a channel. If the channel
 *          is not ready to accept data then the calling thread is suspended.
 *
 * @param[in] ip        pointer to a @p BaseChannel or derived class
 * @param[out] bp       pointer to the data buffer
 * @param[in] n         the maximum amount of data to be transferred
 * @param[in] time      the number of ticks before the operation timeouts,
 *                      the following special values are allowed:
 *                      - @a TIME_IMMEDIATE immediate timeout.
 *                      - @a TIME_INFINITE no timeout.
 *                      .
 * @return              The number of bytes transferred.
 *
 * @api
 */
#define chnWriteTimeout(ip, bp, n, time) ((ip)->vmt->writet(ip, bp, n, time))

/**
 * @brief   Channel blocking read.
 * @details The function reads data from a channel into a buffer. If the data
 *          is not available then the calling thread is suspended.
 *
 * @param[in] ip        pointer to a @p BaseChannel or derived class
 * @param[in] bp        pointer to the data buffer
 * @param[in] n         the maximum amount of data to be transferred
 *
 * @return              The number of bytes transferred.
 *
 * @api
 */
#define chnRead(ip, bp, n) streamRead(ip, bp, n)

/**
 * @brief   Channel blocking read with timeout.
 * @details The function reads data from a channel into a buffer. If the data
 *          is not available then the calling thread is suspended.
 *
 * @param[in] ip        pointer to a @p BaseChannel or derived class
 * @param[in] bp        pointer to the data buffer
 * @param[in] n         the maximum amount of data to be transferred
 * @param[in] time      the number of ticks before the operation timeouts,
 *                      the following special values are allowed:
 *                      - @a TIME_IMMEDIATE immediate timeout.
 *                      - @a TIME_INFINITE no timeout.
 *                      .
 * @return              The number of bytes transferred.
 *
 * @api
 */
#define chnReadTimeout(ip, bp, n, time) ((ip)->vmt->readt(ip, bp, n, time))

/**
 * @brief   Control operation on a channel.
 *
 * @param[in] ip        pointer to a @p BaseChannel or derived class
 * @param[in] operation control operation code
 * @param[in,out] arg   operation argument
 *
 * @return              The control operation status.
 * @retval MSG_OK       in case of success.
 * @retval MSG_TIMEOUT  in case of operation timeout.
 * @retval MSG_RESET    in case of operation reset.
 *
 * @api
 */
#define chnControl(ip, operation, arg) ((ip)->vmt->ctl(ip, operation, arg))
/** @} */

/**
 * @name    I/O status flags added to the event listener
 * @{
 */
/** @brief No pending conditions.*/
#define CHN_NO_ERROR            (eventflags_t)0
/** @brief Connection happened.*/
#define CHN_CONNECTED           (eventflags_t)1
/** @brief Disconnection happened.*/
#define CHN_DISCONNECTED        (eventflags_t)2
/** @brief Data available in the input queue.*/
#define CHN_INPUT_AVAILABLE     (eventflags_t)4
/** @brief Output queue empty.*/
#define CHN_OUTPUT_EMPTY        (eventflags_t)8
/** @brief Transmission end.*/
#define CHN_TRANSMISSION_END    (eventflags_t)16
/** @brief Parity error.*/
#define CHN_PARITY_ERROR         (eventflags_t)32
/** @brief Framing error.*/
#define CHN_FRAMING_ERROR        (eventflags_t)64
/** @brief Line noise error.*/
#define CHN_NOISE_ERROR          (eventflags_t)128
/** @brief Overflow error.*/
#define CHN_OVERRUN_ERROR        (eventflags_t)256
/** @brief RX line idle.*/
#define CHN_IDLE_DETECTED        (eventflags_t)512
/** @brief LIN Break.*/
#define CHN_BREAK_DETECTED       (eventflags_t)1024
/**< @brief RX buffer full. */
#define CHN_BUFFER_FULL_ERROR    (eventflags_t)2048
/** @} */

/**
 * @brief   Type of a base asynchronous channel class.
 */
typedef struct base_asynchronous_channel base_asynchronous_channel_c;

/**
 * @brief   Type of a legacy base asynchronous channel class.
 * @deprecated
 */
typedef base_asynchronous_channel_c BaseAsynchronousChannel;

/**
 * @brief   @p base_asynchronous_channel_c specific methods.
 */
#define __base_asynchronous_channel_methods                                 \
  __base_channel_methods

/**
 * @brief   @p base_asynchronous_channel_c specific data.
 */
#define __base_asynchronous_channel_data                                    \
  __base_channel_data                                                       \
  /* I/O condition event source.*/                                          \
  event_source_t                event;

/**
 * @brief   @p base_asynchronous_channel_c virtual methods table.
 */
struct base_asynchronous_channel_vmt {
  __base_asynchronous_channel_methods
};

/**
 * @brief   Structure representing a base asynchronous channel class.
 */
struct base_asynchronous_channel {
  /**
   * @brief   Virtual Methods Table.
   */
  const struct base_asynchronous_channel_vmt *vmt;
  __base_asynchronous_channel_data
};

/**
 * @name    Methods implementations (base_asynchronous_channel_c)
 * @{
 */
/**
 * @brief   Object creation implementation.
 *
 * @param[out] ip       Pointer to a @p base_asynchronous_channel_c structure
 *                      to be initialized.
 * @param[in] vmt       VMT pointer for the new object.
 * @return              A new reference to the object.
 */
CC_FORCE_INLINE
static inline void *__base_asynchronous_channel_objinit_impl(void *ip,
                                                             const void *vmt) {
  base_asynchronous_channel_c *objp = (base_asynchronous_channel_c *)ip;

  __base_channel_objinit_impl(objp, vmt);

  return objp;
}

/**
 * @brief   Object finalization implementation.
 *
 * @param[in] ip        Pointer to a @p base_asynchronous_channel_c structure
 *                      to be disposed.
 */
CC_FORCE_INLINE
static inline void __base_asynchronous_channel_dispose_impl(void *ip) {
  base_asynchronous_channel_c *objp = (base_asynchronous_channel_c *)ip;

  __base_channel_dispose_impl(objp);
}
/** @} */

/**
 * @name    Macro Functions (base_asynchronous_channel_c)
 * @{
 */
/**
 * @brief   Returns the I/O condition event source.
 * @details The event source is broadcasted when an I/O condition happens.
 *
 * @param[in] ip        pointer to a @p BaseAsynchronousChannel or derived
 *                      class
 * @return              A pointer to an @p EventSource object.
 *
 * @api
 */
#define chnGetEventSource(ip) (&((ip)->event))

/**
 * @brief   Adds status flags to the listeners's flags mask.
 * @details This function is usually called from the I/O ISRs in order to
 *          notify I/O conditions such as data events, errors, signal
 *          changes etc.
 *
 * @param[in] ip        pointer to a @p BaseAsynchronousChannel or derived
 *                      class
 * @param[in] flags     condition flags to be added to the listener flags mask
 *
 * @iclass
 */
#define chnAddFlagsI(ip, flags) {                                           \
  osalEventBroadcastFlagsI(&(ip)->event, flags);                            \
}
/** @} */

#endif /* HAL_CHANNELS_H */

/** @} */
