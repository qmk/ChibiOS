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

/**
 * @name    Common driver states
 * @{
 */
#define HAL_DRV_STATE_UNINIT                0U
#define HAL_DRV_STATE_STOPPED               1U
#define HAL_DRV_STATE_READY                 2U
#define HAL_DRV_STATE_ACTIVE                3U
#define HAL_DRV_STATE_ERROR                 4U
/** @} */

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/**
 * @name    Common driver configuration options
 * @{
 */
/**
 * @brief   Enables the mutual exclusion APIs on driver instances.
 * @note    Disabling this option saves both code and data space.
 */
#if !defined(HAL_USE_MUTUAL_EXCLUSION) || defined(__DOXYGEN__)
#define HAL_USE_MUTUAL_EXCLUSION            TRUE
#endif

/**
 * @brief   Enables the HAL registry for drivers.
 * @note    Disabling this option saves both code and data space.
 */
#if !defined(HAL_USE_REGISTRY) || defined(__DOXYGEN__)
#define HAL_USE_REGISTRY                    TRUE
#endif
/** @} */

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

#if (HAL_USE_MUTUAL_EXCLUSION != TRUE) && (HAL_USE_MUTUAL_EXCLUSION != FALSE)
#error "invalid HAL_USE_MUTUAL_EXCLUSION value"
#endif

#if (HAL_USE_REGISTRY != TRUE) && (HAL_USE_REGISTRY != FALSE)
#error "invalid HAL_USE_REGISTRY value"
#endif

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
  __referenced_object_methods

#if (HAL_USE_MUTUAL_EXCLUSION == TRUE) || defined(__DOXYGEN__)
/**
 * @brief   @p base_driver_c specific data.
 */
#define __base_driver_data                                                  \
  __referenced_object_data                                                  \
  /* Driver state.*/                                                        \
  hal_driver_state_t                        state;                          \
  /* Driver owner or NULL.*/                                                \
  void                                      *owner;                         \
  /* Mutual exclusion object.*/                                             \
  mutex_t                                   mutex;

#else /* HAL_USE_MUTUAL_EXCLUSION != TRUE */
#define __base_driver_data                                                  \
  __referenced_object_data                                                  \
  hal_driver_state_t                        state;                          \
  void                                      *owner;
#endif /* HAL_USE_MUTUAL_EXCLUSION != TRUE */

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
  objp->owner = NULL;
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
 * @brief   Driver close.
 * @details Releases a reference to the driver, when the count reaches zero
 *          then the driver is physically uninitialized.
 *
 * @param[in] ip        Pointer to a @p base_driver_c structure.
 * @return              The number of references left.
 */
CC_FORCE_INLINE
static inline oop_object_references_t drvClose(void *ip) {
  base_driver_c *objp = (base_driver_c *)ip;

  return roRelease(objp);
}

/**
 * @brief   Driver state get.
 *
 * @param[in] ip        Pointer to a @p base_driver_c structure.
 * @return              The driver state.
 */
CC_FORCE_INLINE
static inline hal_driver_state_t drvGetStateX(void *ip) {
  base_driver_c *objp = (base_driver_c *)ip;

  return objp->state;
}

/**
 * @brief   Driver state set.
 *
 * @param[in] ip        Pointer to a @p base_driver_c structure.
 * @param[in] state     New driver state.
 */
CC_FORCE_INLINE
static inline void drvSetStateX(void *ip, hal_driver_state_t state) {

  ((base_driver_c *)ip)->state = state;
}

/**
 * @brief   Driver owner get.
 *
 * @param[in] ip        Pointer to a @p base_driver_c structure.
 * @return              The driver owner.
 */
CC_FORCE_INLINE
static inline void *drvGetOwnerX(void *ip) {
  base_driver_c *objp = (base_driver_c *)ip;

  return objp->owner;
}

/**
 * @brief   Driver owner set.
 *
 * @param[in] ip        Pointer to a @p base_driver_c structure.
 * @param[in] owner     New driver owner.
 */
CC_FORCE_INLINE
static inline void drvSetOwnerX(void *ip, void *owner) {
  base_driver_c *objp = (base_driver_c *)ip;

  objp->owner = owner;
}

#if (HAL_USE_MUTUAL_EXCLUSION == TRUE) || defined(__DOXYGEN__)
/**
 * @brief   Driver lock.
 *
 * @param[in] ip        Pointer to a @p base_driver_c structure to be
 *                      locked.
 */
CC_FORCE_INLINE
static inline void drvLock(void *ip) {
  base_driver_c *objp = (base_driver_c *)ip;

  osalMutexLock(&objp->mutex);
}

/**
 * @brief   Driver unlock.
 *
 * @param[in] ip        Pointer to a @p base_driver_c structure to be
 *                      unlocked.
 */
CC_FORCE_INLINE
static inline void drvUnlock(void *ip) {
  base_driver_c *objp = (base_driver_c *)ip;

  osalMutexUnlock(&objp->mutex);
}
#endif /* HAL_USE_MUTUAL_EXCLUSION == TRUE */

#endif /* HAL_BASE_DRIVER */

/** @} */
