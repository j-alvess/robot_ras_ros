// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from count_interfaces:action/Count.idl
// generated code does not contain a copyright notice

#ifndef COUNT_INTERFACES__ACTION__DETAIL__COUNT__STRUCT_H_
#define COUNT_INTERFACES__ACTION__DETAIL__COUNT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Count in the package count_interfaces.
typedef struct count_interfaces__action__Count_Goal
{
  int32_t limit;
} count_interfaces__action__Count_Goal;

// Struct for a sequence of count_interfaces__action__Count_Goal.
typedef struct count_interfaces__action__Count_Goal__Sequence
{
  count_interfaces__action__Count_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} count_interfaces__action__Count_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Count in the package count_interfaces.
typedef struct count_interfaces__action__Count_Result
{
  int32_t total;
} count_interfaces__action__Count_Result;

// Struct for a sequence of count_interfaces__action__Count_Result.
typedef struct count_interfaces__action__Count_Result__Sequence
{
  count_interfaces__action__Count_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} count_interfaces__action__Count_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Count in the package count_interfaces.
typedef struct count_interfaces__action__Count_Feedback
{
  int32_t current;
} count_interfaces__action__Count_Feedback;

// Struct for a sequence of count_interfaces__action__Count_Feedback.
typedef struct count_interfaces__action__Count_Feedback__Sequence
{
  count_interfaces__action__Count_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} count_interfaces__action__Count_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "count_interfaces/action/detail/count__struct.h"

/// Struct defined in action/Count in the package count_interfaces.
typedef struct count_interfaces__action__Count_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  count_interfaces__action__Count_Goal goal;
} count_interfaces__action__Count_SendGoal_Request;

// Struct for a sequence of count_interfaces__action__Count_SendGoal_Request.
typedef struct count_interfaces__action__Count_SendGoal_Request__Sequence
{
  count_interfaces__action__Count_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} count_interfaces__action__Count_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Count in the package count_interfaces.
typedef struct count_interfaces__action__Count_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} count_interfaces__action__Count_SendGoal_Response;

// Struct for a sequence of count_interfaces__action__Count_SendGoal_Response.
typedef struct count_interfaces__action__Count_SendGoal_Response__Sequence
{
  count_interfaces__action__Count_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} count_interfaces__action__Count_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Count in the package count_interfaces.
typedef struct count_interfaces__action__Count_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} count_interfaces__action__Count_GetResult_Request;

// Struct for a sequence of count_interfaces__action__Count_GetResult_Request.
typedef struct count_interfaces__action__Count_GetResult_Request__Sequence
{
  count_interfaces__action__Count_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} count_interfaces__action__Count_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "count_interfaces/action/detail/count__struct.h"

/// Struct defined in action/Count in the package count_interfaces.
typedef struct count_interfaces__action__Count_GetResult_Response
{
  int8_t status;
  count_interfaces__action__Count_Result result;
} count_interfaces__action__Count_GetResult_Response;

// Struct for a sequence of count_interfaces__action__Count_GetResult_Response.
typedef struct count_interfaces__action__Count_GetResult_Response__Sequence
{
  count_interfaces__action__Count_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} count_interfaces__action__Count_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "count_interfaces/action/detail/count__struct.h"

/// Struct defined in action/Count in the package count_interfaces.
typedef struct count_interfaces__action__Count_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  count_interfaces__action__Count_Feedback feedback;
} count_interfaces__action__Count_FeedbackMessage;

// Struct for a sequence of count_interfaces__action__Count_FeedbackMessage.
typedef struct count_interfaces__action__Count_FeedbackMessage__Sequence
{
  count_interfaces__action__Count_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} count_interfaces__action__Count_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COUNT_INTERFACES__ACTION__DETAIL__COUNT__STRUCT_H_
