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
 * @file    hal_com_driver.h
 * @brief   Ancestor class for all communication HAL drivers.
 * @details HAL communication drivers all share a common set of
 *          functionalities:
 *          - Exposing a stream or channel interface for communication.
 *          - Identification of the type of the interface and additional
 *            attributes.
 *          .
 *
 * @addtogroup HAL_COM_DRIVER
 * @{
 */

#ifndef HAL_COM_DRIVER_H
#define HAL_COM_DRIVER_H

#include "hal_base_driver.h"

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

/**
 * @name    Attributes of the communication interface
 * @{
 */
#define COM_ATTR_IF_TYPE_MASK               (7U << 0)
#define COM_ATTR_IF_TYPE_UNSPECIFIED        (0U << 0)
#define COM_ATTR_IF_TYPE_STREAM             (1U << 0)
#define COM_ATTR_IF_TYPE_CHANNEL            (2U << 0)
/** @} */

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
 * @brief   Type of a communication driver capabilities.
 */
typedef unsigned int com_driver_attributes_t;

/**
 * @brief   Type of a communication driver class.
 */
typedef struct com_driver com_driver_c;

/**
 * @brief   @p com_driver_c specific methods.
 */
#define __com_driver_methods                                                \
  __base_driver_methods

/**
 * @brief   @p com_driver_c specific data.
 */
#define __com_driver_data                                                   \
  __base_driver_data

/**
 * @brief   @p com_driver_c virtual methods table.
 */
struct __base_driver_vmt {
  __base_driver_methods
  void * (*getcomif)(void *ip);
  com_driver_attributes_t (*getcomattr)(void *ip);
};

/**
 * @brief   Structure representing a base driver class.
 */
struct com_driver {
  /**
   * @brief   Virtual Methods Table.
   */
  const struct __com_driver_vmt             *vmt;
  __com_driver_data
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
 * @param[out] ip       Pointer to a @p com_driver_c structure to be
 *                      initialized.
 * @param[in] vmt       VMT pointer for the new object.
 * @return              A new reference to the object.
 */
CC_FORCE_INLINE
static inline void *_com_driver_objinit_impl(void *ip, const void *vmt) {
  com_driver_c *objp = (com_driver_c *)ip;

  __base_driver_objinit_impl(objp, vmt);

  return ip;
}

/**
 * @brief   Object finalization implementation.
 *
 * @param[in] ip        Pointer to a @p com_driver_c structure to be
 *                      disposed.
 */
CC_FORCE_INLINE
static inline void __com_driver_dispose_impl(void *ip) {
  com_driver_c *objp = (com_driver_c *)ip;

  __base_driver_dispose_impl(objp);
}
/** @} */

/**
 * @brief   Driver communication interface pointer get.
 *
 * @param[in] ip        Pointer to a @p com_driver_c structure.
 * @return              The communication interface pointer.
 */
CC_FORCE_INLINE
static inline void *drvGetCommunicationIfX(void *ip) {
  base_driver_c *objp = (base_driver_c *)ip;

  return objp->getcomif(ip);
}

/**
 * @brief   Driver communication interface attributes get.
 *
 * @param[in] ip        Pointer to a @p com_driver_c structure.
 * @return              The communication interface attributes.
 */
CC_FORCE_INLINE
static inline void *drvGetCommunicationAttributesX(void *ip) {
  base_driver_c *objp = (base_driver_c *)ip;

  return objp->getcomattr(ip);
}

#endif /* HAL_COM_DRIVER_H */

/** @} */
