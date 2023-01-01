/*
    ChibiOS - Copyright (C) 2006..2021 Giovanni Di Sirio

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
 * @file    oop_synchronized_object.h
 * @brief   Base class for objects supporting synchronization.
 * @details This header defines a base class for classes requiring a
 *          synchronization mechanism.
 *
 * @addtogroup OOP_SYNCHRONIZED_OBJECT
 * @details Base class for objects that require a synchronization mechanism.
 *          This class extends @p referenced_object_c class.
 * @{
 */

#ifndef OOP_SYNCHRONIZED_OBJECT_H
#define OOP_SYNCHRONIZED_OBJECT_H

#include "ch.h"
#include "oop_referenced_object.h"

/**
 * @brief   Type of a synchronized object class.
 */
typedef struct synchronized_object synchronized_object_c;

/**
 * @brief   @p synchronized_object_c specific methods.
 * @note    This object defines no virtual methods.
 */
#define __synchronized_object_methods                                       \
  __referenced_object_methods

/**
 * @brief   @p synchronized_object_c specific data.
 */
#define __synchronized_object_data                                          \
  __referenced_object_data                                                  \
  mutex_t                                   mutex;

/**
 * @brief   @p synchronized_object_c virtual methods table.
 */
struct __synchronized_object_vmt {
  __synchronized_object_methods
};

/**
 * @brief   Structure representing a synchronized object class.
 */
struct synchronized_object {
  /**
   * @brief   Virtual Methods Table.
   */
  const struct __synchronized_object_vmt    *vmt;
  __synchronized_object_data
};

/**
 * @name    Methods implementations
 * @{
 */
/**
 * @brief   Object creation implementation.
 *
 * @param[in] ip        Pointer to a @p synchronized_object_c structure to be
 *                      initialized.
 * @param[in] vmt       VMT pointer for the new object.
 * @return              A new reference to the object.
 */
CC_FORCE_INLINE
static inline void *__synchronized_object_objinit_impl(void *ip, const void *vmt) {
  synchronized_object_c *objp = (synchronized_object_c *)ip;

  __referenced_object_objinit_impl(ip, vmt);
  chMtxObjectInit(&objp->mutex);

  return ip;
}

/**
 * @brief   Object finalization implementation.
 *
 * @param[in] ip        Pointer to a @p synchronized_object_c structure to be
 *                      disposed.
 */
CC_FORCE_INLINE
static inline void __synchronized_object_dispose_impl(void *ip) {

  /* TODO add RT objects disposing when available.*/
  __referenced_object_dispose_impl(ip);
}
/** @} */

/**
 * @brief   Object lock.
 *
 * @param[in] ip        A reference to the object.
 */
CC_FORCE_INLINE
static inline void soLock(void *ip) {
  synchronized_object_c *objp = (synchronized_object_c *)ip;

  chMtxLock(&objp->mutex);
}

/**
 * @brief   Object unlock.
 *
 * @param[in] ip        A reference to the object.
 */
CC_FORCE_INLINE
static inline void soUnlock(void *ip) {
  synchronized_object_c *objp = (synchronized_object_c *)ip;

  chMtxUnlock(&objp->mutex);
}

#endif /* OOP_SYNCHRONIZED_OBJECT_H */

/** @} */
