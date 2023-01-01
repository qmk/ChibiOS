/*
    ChibiOS - Copyright (C) 2006..2018 Giovanni Di Sirio

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
 * @file    hal_base_driver.h
 * @brief   Ancestor class for all stateful HAL drivers.
 * @details HAL drivers all share a common set of functionalities:
 *          - A common set of methods.
 *          - A state variable and a common set of driver states.
 *          - Ability to be handled as reference-counted objects.
 *          - Ability to handle mutual exclusion on the driver instance.
 *          .
 *
 * @addtogroup HAL_BASE_DRIVER
 * @{
 */

#ifndef HAL_BASE_DRIVER_H
#define HAL_BASE_DRIVER_H

#include "oop_referenced_object.h"

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

/**
 * @brief   Type of a driver state variable.
 */
typedef unsigned int hal_driver_state_t;

/**
 * @brief   Type of a base driver class.
 */
typedef struct base_driver base_driver_c;

/**
 * @brief   @p base_driver_c specific methods.
 */
#define __base_driver_methods                                               \
  __referenced_object_methods                                               \
  void (*stop)(void *ip);                                                   \
  void (*lock)(void *ip);                                                   \
  void (*unlock)(void *ip);

/**
 * @brief   @p base_driver_c specific data.
 */
#define __base_driver_data                                                  \
  __referenced_object_data                                                  \
  hal_driver_state_t                        state;                          \
  mutex_t                                   mutex;


/**
 * @brief   @p base_driver_c virtual methods table.
 */
struct __base_driver_vmt {
  __base_driver_methods
};

/**
 * @brief   Structure representing a base driver class.
 */
struct base_driver {
  /**
   * @brief   Virtual Methods Table.
   */
  const struct __base_driver_vmt            *vmt;
  __base_driver_data
};

/*===========================================================================*/
/* Driver macros.                                                            */
/*===========================================================================*/

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

/*===========================================================================*/
/* Driver inline functions.                                                  */
/*===========================================================================*/

/**
 * @name    Methods implementations
 * @{
 */
/**
 * @brief   Object creation implementation.
 *
 * @param[in] ip        Pointer to a @p base_driver_c structure to be
 *                      initialized.
 * @param[in] vmt       VMT pointer for the new object.
 * @return              A new reference to the object.
 */
CC_FORCE_INLINE
static inline void *__base_driver_objinit_impl(void *ip, const void *vmt) {
  base_driver_c *objp = (base_driver_c *)ip;

  __referenced_object_objinit_impl(objp, vmt);
  osalMutexObjectInit(&objp->mutex);

  return ip;
}

/**
 * @brief   Object finalization implementation.
 *
 * @param[in] ip        Pointer to a @p base_driver_c structure to be
 *                      disposed.
 */
CC_FORCE_INLINE
static inline void __base_driver_dispose_impl(void *ip) {
  base_driver_c *objp = (base_driver_c *)ip;

  /* TODO mutex dispose (missing in OSAL) */
  __referenced_object_dispose_impl(objp);
}
/** @} */

/**
 * @brief   Object lock.
 *
 * @param[in] ip        Pointer to a @p synchronized_object_c structure to be
 *                      locked.
 */
CC_FORCE_INLINE
static inline void drvLock(void *ip) {
  base_driver_c *objp = (base_driver_c *)ip;

  osalMutexLock(&objp->mutex);
}

/**
 * @brief   Object unlock.
 *
 * @param[in] ip        Pointer to a @p synchronized_object_c structure to be
 *                      unlocked.
 */
CC_FORCE_INLINE
static inline void drvUnlock(void *ip) {
  base_driver_c *objp = (base_driver_c *)ip;

  osalMutexUnlock(&objp->mutex);
}

#endif /* HAL_BASE_DRIVER */

/** @} */
