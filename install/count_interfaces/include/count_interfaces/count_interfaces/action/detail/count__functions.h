// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from count_interfaces:action/Count.idl
// generated code does not contain a copyright notice

#ifndef COUNT_INTERFACES__ACTION__DETAIL__COUNT__FUNCTIONS_H_
#define COUNT_INTERFACES__ACTION__DETAIL__COUNT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "count_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "count_interfaces/action/detail/count__struct.h"

/// Initialize action/Count message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * count_interfaces__action__Count_Goal
 * )) before or use
 * count_interfaces__action__Count_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_Goal__init(count_interfaces__action__Count_Goal * msg);

/// Finalize action/Count message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_Goal__fini(count_interfaces__action__Count_Goal * msg);

/// Create action/Count message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * count_interfaces__action__Count_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
count_interfaces__action__Count_Goal *
count_interfaces__action__Count_Goal__create();

/// Destroy action/Count message.
/**
 * It calls
 * count_interfaces__action__Count_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_Goal__destroy(count_interfaces__action__Count_Goal * msg);

/// Check for action/Count message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_Goal__are_equal(const count_interfaces__action__Count_Goal * lhs, const count_interfaces__action__Count_Goal * rhs);

/// Copy a action/Count message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_Goal__copy(
  const count_interfaces__action__Count_Goal * input,
  count_interfaces__action__Count_Goal * output);

/// Initialize array of action/Count messages.
/**
 * It allocates the memory for the number of elements and calls
 * count_interfaces__action__Count_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_Goal__Sequence__init(count_interfaces__action__Count_Goal__Sequence * array, size_t size);

/// Finalize array of action/Count messages.
/**
 * It calls
 * count_interfaces__action__Count_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_Goal__Sequence__fini(count_interfaces__action__Count_Goal__Sequence * array);

/// Create array of action/Count messages.
/**
 * It allocates the memory for the array and calls
 * count_interfaces__action__Count_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
count_interfaces__action__Count_Goal__Sequence *
count_interfaces__action__Count_Goal__Sequence__create(size_t size);

/// Destroy array of action/Count messages.
/**
 * It calls
 * count_interfaces__action__Count_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_Goal__Sequence__destroy(count_interfaces__action__Count_Goal__Sequence * array);

/// Check for action/Count message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_Goal__Sequence__are_equal(const count_interfaces__action__Count_Goal__Sequence * lhs, const count_interfaces__action__Count_Goal__Sequence * rhs);

/// Copy an array of action/Count messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_Goal__Sequence__copy(
  const count_interfaces__action__Count_Goal__Sequence * input,
  count_interfaces__action__Count_Goal__Sequence * output);

/// Initialize action/Count message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * count_interfaces__action__Count_Result
 * )) before or use
 * count_interfaces__action__Count_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_Result__init(count_interfaces__action__Count_Result * msg);

/// Finalize action/Count message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_Result__fini(count_interfaces__action__Count_Result * msg);

/// Create action/Count message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * count_interfaces__action__Count_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
count_interfaces__action__Count_Result *
count_interfaces__action__Count_Result__create();

/// Destroy action/Count message.
/**
 * It calls
 * count_interfaces__action__Count_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_Result__destroy(count_interfaces__action__Count_Result * msg);

/// Check for action/Count message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_Result__are_equal(const count_interfaces__action__Count_Result * lhs, const count_interfaces__action__Count_Result * rhs);

/// Copy a action/Count message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_Result__copy(
  const count_interfaces__action__Count_Result * input,
  count_interfaces__action__Count_Result * output);

/// Initialize array of action/Count messages.
/**
 * It allocates the memory for the number of elements and calls
 * count_interfaces__action__Count_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_Result__Sequence__init(count_interfaces__action__Count_Result__Sequence * array, size_t size);

/// Finalize array of action/Count messages.
/**
 * It calls
 * count_interfaces__action__Count_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_Result__Sequence__fini(count_interfaces__action__Count_Result__Sequence * array);

/// Create array of action/Count messages.
/**
 * It allocates the memory for the array and calls
 * count_interfaces__action__Count_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
count_interfaces__action__Count_Result__Sequence *
count_interfaces__action__Count_Result__Sequence__create(size_t size);

/// Destroy array of action/Count messages.
/**
 * It calls
 * count_interfaces__action__Count_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_Result__Sequence__destroy(count_interfaces__action__Count_Result__Sequence * array);

/// Check for action/Count message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_Result__Sequence__are_equal(const count_interfaces__action__Count_Result__Sequence * lhs, const count_interfaces__action__Count_Result__Sequence * rhs);

/// Copy an array of action/Count messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_Result__Sequence__copy(
  const count_interfaces__action__Count_Result__Sequence * input,
  count_interfaces__action__Count_Result__Sequence * output);

/// Initialize action/Count message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * count_interfaces__action__Count_Feedback
 * )) before or use
 * count_interfaces__action__Count_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_Feedback__init(count_interfaces__action__Count_Feedback * msg);

/// Finalize action/Count message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_Feedback__fini(count_interfaces__action__Count_Feedback * msg);

/// Create action/Count message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * count_interfaces__action__Count_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
count_interfaces__action__Count_Feedback *
count_interfaces__action__Count_Feedback__create();

/// Destroy action/Count message.
/**
 * It calls
 * count_interfaces__action__Count_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_Feedback__destroy(count_interfaces__action__Count_Feedback * msg);

/// Check for action/Count message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_Feedback__are_equal(const count_interfaces__action__Count_Feedback * lhs, const count_interfaces__action__Count_Feedback * rhs);

/// Copy a action/Count message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_Feedback__copy(
  const count_interfaces__action__Count_Feedback * input,
  count_interfaces__action__Count_Feedback * output);

/// Initialize array of action/Count messages.
/**
 * It allocates the memory for the number of elements and calls
 * count_interfaces__action__Count_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_Feedback__Sequence__init(count_interfaces__action__Count_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Count messages.
/**
 * It calls
 * count_interfaces__action__Count_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_Feedback__Sequence__fini(count_interfaces__action__Count_Feedback__Sequence * array);

/// Create array of action/Count messages.
/**
 * It allocates the memory for the array and calls
 * count_interfaces__action__Count_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
count_interfaces__action__Count_Feedback__Sequence *
count_interfaces__action__Count_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Count messages.
/**
 * It calls
 * count_interfaces__action__Count_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_Feedback__Sequence__destroy(count_interfaces__action__Count_Feedback__Sequence * array);

/// Check for action/Count message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_Feedback__Sequence__are_equal(const count_interfaces__action__Count_Feedback__Sequence * lhs, const count_interfaces__action__Count_Feedback__Sequence * rhs);

/// Copy an array of action/Count messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_Feedback__Sequence__copy(
  const count_interfaces__action__Count_Feedback__Sequence * input,
  count_interfaces__action__Count_Feedback__Sequence * output);

/// Initialize action/Count message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * count_interfaces__action__Count_SendGoal_Request
 * )) before or use
 * count_interfaces__action__Count_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_SendGoal_Request__init(count_interfaces__action__Count_SendGoal_Request * msg);

/// Finalize action/Count message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_SendGoal_Request__fini(count_interfaces__action__Count_SendGoal_Request * msg);

/// Create action/Count message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * count_interfaces__action__Count_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
count_interfaces__action__Count_SendGoal_Request *
count_interfaces__action__Count_SendGoal_Request__create();

/// Destroy action/Count message.
/**
 * It calls
 * count_interfaces__action__Count_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_SendGoal_Request__destroy(count_interfaces__action__Count_SendGoal_Request * msg);

/// Check for action/Count message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_SendGoal_Request__are_equal(const count_interfaces__action__Count_SendGoal_Request * lhs, const count_interfaces__action__Count_SendGoal_Request * rhs);

/// Copy a action/Count message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_SendGoal_Request__copy(
  const count_interfaces__action__Count_SendGoal_Request * input,
  count_interfaces__action__Count_SendGoal_Request * output);

/// Initialize array of action/Count messages.
/**
 * It allocates the memory for the number of elements and calls
 * count_interfaces__action__Count_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_SendGoal_Request__Sequence__init(count_interfaces__action__Count_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Count messages.
/**
 * It calls
 * count_interfaces__action__Count_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_SendGoal_Request__Sequence__fini(count_interfaces__action__Count_SendGoal_Request__Sequence * array);

/// Create array of action/Count messages.
/**
 * It allocates the memory for the array and calls
 * count_interfaces__action__Count_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
count_interfaces__action__Count_SendGoal_Request__Sequence *
count_interfaces__action__Count_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Count messages.
/**
 * It calls
 * count_interfaces__action__Count_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_SendGoal_Request__Sequence__destroy(count_interfaces__action__Count_SendGoal_Request__Sequence * array);

/// Check for action/Count message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_SendGoal_Request__Sequence__are_equal(const count_interfaces__action__Count_SendGoal_Request__Sequence * lhs, const count_interfaces__action__Count_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Count messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_SendGoal_Request__Sequence__copy(
  const count_interfaces__action__Count_SendGoal_Request__Sequence * input,
  count_interfaces__action__Count_SendGoal_Request__Sequence * output);

/// Initialize action/Count message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * count_interfaces__action__Count_SendGoal_Response
 * )) before or use
 * count_interfaces__action__Count_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_SendGoal_Response__init(count_interfaces__action__Count_SendGoal_Response * msg);

/// Finalize action/Count message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_SendGoal_Response__fini(count_interfaces__action__Count_SendGoal_Response * msg);

/// Create action/Count message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * count_interfaces__action__Count_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
count_interfaces__action__Count_SendGoal_Response *
count_interfaces__action__Count_SendGoal_Response__create();

/// Destroy action/Count message.
/**
 * It calls
 * count_interfaces__action__Count_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_SendGoal_Response__destroy(count_interfaces__action__Count_SendGoal_Response * msg);

/// Check for action/Count message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_SendGoal_Response__are_equal(const count_interfaces__action__Count_SendGoal_Response * lhs, const count_interfaces__action__Count_SendGoal_Response * rhs);

/// Copy a action/Count message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_SendGoal_Response__copy(
  const count_interfaces__action__Count_SendGoal_Response * input,
  count_interfaces__action__Count_SendGoal_Response * output);

/// Initialize array of action/Count messages.
/**
 * It allocates the memory for the number of elements and calls
 * count_interfaces__action__Count_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_SendGoal_Response__Sequence__init(count_interfaces__action__Count_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Count messages.
/**
 * It calls
 * count_interfaces__action__Count_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_SendGoal_Response__Sequence__fini(count_interfaces__action__Count_SendGoal_Response__Sequence * array);

/// Create array of action/Count messages.
/**
 * It allocates the memory for the array and calls
 * count_interfaces__action__Count_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
count_interfaces__action__Count_SendGoal_Response__Sequence *
count_interfaces__action__Count_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Count messages.
/**
 * It calls
 * count_interfaces__action__Count_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_SendGoal_Response__Sequence__destroy(count_interfaces__action__Count_SendGoal_Response__Sequence * array);

/// Check for action/Count message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_SendGoal_Response__Sequence__are_equal(const count_interfaces__action__Count_SendGoal_Response__Sequence * lhs, const count_interfaces__action__Count_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Count messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_SendGoal_Response__Sequence__copy(
  const count_interfaces__action__Count_SendGoal_Response__Sequence * input,
  count_interfaces__action__Count_SendGoal_Response__Sequence * output);

/// Initialize action/Count message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * count_interfaces__action__Count_GetResult_Request
 * )) before or use
 * count_interfaces__action__Count_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_GetResult_Request__init(count_interfaces__action__Count_GetResult_Request * msg);

/// Finalize action/Count message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_GetResult_Request__fini(count_interfaces__action__Count_GetResult_Request * msg);

/// Create action/Count message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * count_interfaces__action__Count_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
count_interfaces__action__Count_GetResult_Request *
count_interfaces__action__Count_GetResult_Request__create();

/// Destroy action/Count message.
/**
 * It calls
 * count_interfaces__action__Count_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_GetResult_Request__destroy(count_interfaces__action__Count_GetResult_Request * msg);

/// Check for action/Count message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_GetResult_Request__are_equal(const count_interfaces__action__Count_GetResult_Request * lhs, const count_interfaces__action__Count_GetResult_Request * rhs);

/// Copy a action/Count message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_GetResult_Request__copy(
  const count_interfaces__action__Count_GetResult_Request * input,
  count_interfaces__action__Count_GetResult_Request * output);

/// Initialize array of action/Count messages.
/**
 * It allocates the memory for the number of elements and calls
 * count_interfaces__action__Count_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_GetResult_Request__Sequence__init(count_interfaces__action__Count_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Count messages.
/**
 * It calls
 * count_interfaces__action__Count_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_GetResult_Request__Sequence__fini(count_interfaces__action__Count_GetResult_Request__Sequence * array);

/// Create array of action/Count messages.
/**
 * It allocates the memory for the array and calls
 * count_interfaces__action__Count_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
count_interfaces__action__Count_GetResult_Request__Sequence *
count_interfaces__action__Count_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Count messages.
/**
 * It calls
 * count_interfaces__action__Count_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_GetResult_Request__Sequence__destroy(count_interfaces__action__Count_GetResult_Request__Sequence * array);

/// Check for action/Count message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_GetResult_Request__Sequence__are_equal(const count_interfaces__action__Count_GetResult_Request__Sequence * lhs, const count_interfaces__action__Count_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Count messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_GetResult_Request__Sequence__copy(
  const count_interfaces__action__Count_GetResult_Request__Sequence * input,
  count_interfaces__action__Count_GetResult_Request__Sequence * output);

/// Initialize action/Count message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * count_interfaces__action__Count_GetResult_Response
 * )) before or use
 * count_interfaces__action__Count_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_GetResult_Response__init(count_interfaces__action__Count_GetResult_Response * msg);

/// Finalize action/Count message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_GetResult_Response__fini(count_interfaces__action__Count_GetResult_Response * msg);

/// Create action/Count message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * count_interfaces__action__Count_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
count_interfaces__action__Count_GetResult_Response *
count_interfaces__action__Count_GetResult_Response__create();

/// Destroy action/Count message.
/**
 * It calls
 * count_interfaces__action__Count_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_GetResult_Response__destroy(count_interfaces__action__Count_GetResult_Response * msg);

/// Check for action/Count message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_GetResult_Response__are_equal(const count_interfaces__action__Count_GetResult_Response * lhs, const count_interfaces__action__Count_GetResult_Response * rhs);

/// Copy a action/Count message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_GetResult_Response__copy(
  const count_interfaces__action__Count_GetResult_Response * input,
  count_interfaces__action__Count_GetResult_Response * output);

/// Initialize array of action/Count messages.
/**
 * It allocates the memory for the number of elements and calls
 * count_interfaces__action__Count_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_GetResult_Response__Sequence__init(count_interfaces__action__Count_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Count messages.
/**
 * It calls
 * count_interfaces__action__Count_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_GetResult_Response__Sequence__fini(count_interfaces__action__Count_GetResult_Response__Sequence * array);

/// Create array of action/Count messages.
/**
 * It allocates the memory for the array and calls
 * count_interfaces__action__Count_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
count_interfaces__action__Count_GetResult_Response__Sequence *
count_interfaces__action__Count_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Count messages.
/**
 * It calls
 * count_interfaces__action__Count_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_GetResult_Response__Sequence__destroy(count_interfaces__action__Count_GetResult_Response__Sequence * array);

/// Check for action/Count message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_GetResult_Response__Sequence__are_equal(const count_interfaces__action__Count_GetResult_Response__Sequence * lhs, const count_interfaces__action__Count_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Count messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_GetResult_Response__Sequence__copy(
  const count_interfaces__action__Count_GetResult_Response__Sequence * input,
  count_interfaces__action__Count_GetResult_Response__Sequence * output);

/// Initialize action/Count message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * count_interfaces__action__Count_FeedbackMessage
 * )) before or use
 * count_interfaces__action__Count_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_FeedbackMessage__init(count_interfaces__action__Count_FeedbackMessage * msg);

/// Finalize action/Count message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_FeedbackMessage__fini(count_interfaces__action__Count_FeedbackMessage * msg);

/// Create action/Count message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * count_interfaces__action__Count_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
count_interfaces__action__Count_FeedbackMessage *
count_interfaces__action__Count_FeedbackMessage__create();

/// Destroy action/Count message.
/**
 * It calls
 * count_interfaces__action__Count_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_FeedbackMessage__destroy(count_interfaces__action__Count_FeedbackMessage * msg);

/// Check for action/Count message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_FeedbackMessage__are_equal(const count_interfaces__action__Count_FeedbackMessage * lhs, const count_interfaces__action__Count_FeedbackMessage * rhs);

/// Copy a action/Count message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_FeedbackMessage__copy(
  const count_interfaces__action__Count_FeedbackMessage * input,
  count_interfaces__action__Count_FeedbackMessage * output);

/// Initialize array of action/Count messages.
/**
 * It allocates the memory for the number of elements and calls
 * count_interfaces__action__Count_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_FeedbackMessage__Sequence__init(count_interfaces__action__Count_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Count messages.
/**
 * It calls
 * count_interfaces__action__Count_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_FeedbackMessage__Sequence__fini(count_interfaces__action__Count_FeedbackMessage__Sequence * array);

/// Create array of action/Count messages.
/**
 * It allocates the memory for the array and calls
 * count_interfaces__action__Count_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
count_interfaces__action__Count_FeedbackMessage__Sequence *
count_interfaces__action__Count_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Count messages.
/**
 * It calls
 * count_interfaces__action__Count_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
void
count_interfaces__action__Count_FeedbackMessage__Sequence__destroy(count_interfaces__action__Count_FeedbackMessage__Sequence * array);

/// Check for action/Count message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_FeedbackMessage__Sequence__are_equal(const count_interfaces__action__Count_FeedbackMessage__Sequence * lhs, const count_interfaces__action__Count_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Count messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_count_interfaces
bool
count_interfaces__action__Count_FeedbackMessage__Sequence__copy(
  const count_interfaces__action__Count_FeedbackMessage__Sequence * input,
  count_interfaces__action__Count_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COUNT_INTERFACES__ACTION__DETAIL__COUNT__FUNCTIONS_H_
