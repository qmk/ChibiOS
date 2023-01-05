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
 * @file    oop_referenced_object.h
 * @brief   Base class for objects with a reference counter.
 * @details This header defines a base class for classes requiring a
 *          a reference counter and a disposing mechanism.
 *
 * @addtogroup OOP_REFERENCED_OBJECT
 * @details Base class for objects that implement a reference counter and
 *          are disposed when the number of references reaches zero.
 *          This class extends @p base_object_c class.
 * @{
 */

#ifndef OOP_REFERENCED_OBJECT_H
#define OOP_REFERENCED_OBJECT_H

#include "oop_base_object.h"

/**
 * @brief   Type of a references counter.
 */
typedef unsigned int oop_object_references_t;

/**
 * @brief   Type of a referenced object class.
 */
typedef struct referenced_object referenced_object_c;

/**
 * @brief   @p referenced_object_c specific methods.
 */
#define __referenced_object_methods                                         \
  __base_object_methods                                                     \
  void *(*addref)(void *ip);                                                \
  unsigned (*release)(void *ip);

/**
 * @brief   @p referenced_object_c specific data.
 */
#define __referenced_object_data                                            \
  __base_object_data                                                        \
  oop_object_references_t                   references;


/**
 * @brief   @p referenced_object_c virtual methods table.
 */
struct referenced_object_vmt {
  __referenced_object_methods
};

/**
 * @brief   Structure representing a referenced object class.
 */
struct referenced_object {
  /**
   * @brief   Virtual Methods Table.
   */
  const struct referenced_object_vmt        *vmt;
  __referenced_object_data
};

/**
 * @name    Methods implementations
 * @{
 */
/**
 * @brief   Object creation implementation.
 *
 * @param[out] ip       Pointer to a @p referenced_object_c structure to be
 *                      initialized.
 * @param[in] vmt       VMT pointer for the new object.
 * @return              A new reference to the object.
 */
CC_FORCE_INLINE
static inline void *__referenced_object_objinit_impl(void *ip, const void *vmt) {
  referenced_object_c *objp = (referenced_object_c *)ip;

  __base_object_objinit_impl(objp, vmt);
  objp->references = (oop_object_references_t)1;

  return objp;
}

/**
 * @brief   Object finalization implementation.
 *
 * @param[in] ip        Pointer to a @p referenced_object_c structure to be
 *                      disposed.
 */
CC_FORCE_INLINE
static inline void __referenced_object_dispose_impl(void *ip) {
  referenced_object_c *objp = (referenced_object_c *)ip;

  osalDbgAssert(objp->references == (oop_object_references_t)0, "not zero");

  __base_object_dispose_impl(objp);
}

/**
 * @brief   New reference creation implementation.
 *
 * @param[in] ip        A reference to the object.
 * @return              A new reference to the object.
 */
CC_FORCE_INLINE
static inline void *__referenced_object_addref_impl(void *ip) {
  referenced_object_c *objp = (referenced_object_c *)ip;

  objp->references++;

  osalDbgAssert(objp->references != (oop_object_references_t)0, "overflow");

  return ip;
}

/**
 * @brief   References get implementation.
 *
 * @param[in] ip        A reference to the object.
 * @return              Remaining references.
 */
CC_FORCE_INLINE
static inline oop_object_references_t __referenced_object_getref_impl(void *ip) {
  referenced_object_c *objp = (referenced_object_c *)ip;

  return objp->references;
}

/**
 * @brief   Reference release implementation.
 *
 * @param[in] ip        A reference to the object.
 * @return              The number of references left.
 */
CC_FORCE_INLINE
static inline oop_object_references_t __referenced_object_release_impl(void *ip) {
  referenced_object_c *objp = (referenced_object_c *)ip;

  osalDbgAssert(objp->references > 0U, "zero references");

  if (--objp->references == 0U) {
    __referenced_object_dispose_impl(ip);
  }

  return objp->references;
}
/** @} */

/**
 * @brief   New reference creation.
 *
 * @param[in] ip        A reference to the object.
 * @return              A new reference to the object.
 */
CC_FORCE_INLINE
static inline referenced_object_c *roAddRef(void *ip) {
  referenced_object_c *objp = (referenced_object_c *)ip;

  return objp->vmt->addref(ip);
}

/**
 * @brief   Reference release.
 *
 * @param[in] ip        A reference to the object.
 * @return              The number of references left.
 */
CC_FORCE_INLINE
static inline oop_object_references_t roRelease(void *ip) {
  referenced_object_c *objp = (referenced_object_c *)ip;

  return objp->vmt->release(ip);
}

#endif /* OOP_REFERENCED_OBJECT_H */

/** @} */
