// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pickbot_msgs:action/PickbotTask.idl
// generated code does not contain a copyright notice

#ifndef PICKBOT_MSGS__ACTION__DETAIL__PICKBOT_TASK__STRUCT_H_
#define PICKBOT_MSGS__ACTION__DETAIL__PICKBOT_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/PickbotTask in the package pickbot_msgs.
typedef struct pickbot_msgs__action__PickbotTask_Goal
{
  int32_t task_number;
} pickbot_msgs__action__PickbotTask_Goal;

// Struct for a sequence of pickbot_msgs__action__PickbotTask_Goal.
typedef struct pickbot_msgs__action__PickbotTask_Goal__Sequence
{
  pickbot_msgs__action__PickbotTask_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pickbot_msgs__action__PickbotTask_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/PickbotTask in the package pickbot_msgs.
typedef struct pickbot_msgs__action__PickbotTask_Result
{
  bool success;
} pickbot_msgs__action__PickbotTask_Result;

// Struct for a sequence of pickbot_msgs__action__PickbotTask_Result.
typedef struct pickbot_msgs__action__PickbotTask_Result__Sequence
{
  pickbot_msgs__action__PickbotTask_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pickbot_msgs__action__PickbotTask_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/PickbotTask in the package pickbot_msgs.
typedef struct pickbot_msgs__action__PickbotTask_Feedback
{
  int32_t percentage;
} pickbot_msgs__action__PickbotTask_Feedback;

// Struct for a sequence of pickbot_msgs__action__PickbotTask_Feedback.
typedef struct pickbot_msgs__action__PickbotTask_Feedback__Sequence
{
  pickbot_msgs__action__PickbotTask_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pickbot_msgs__action__PickbotTask_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "pickbot_msgs/action/detail/pickbot_task__struct.h"

/// Struct defined in action/PickbotTask in the package pickbot_msgs.
typedef struct pickbot_msgs__action__PickbotTask_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  pickbot_msgs__action__PickbotTask_Goal goal;
} pickbot_msgs__action__PickbotTask_SendGoal_Request;

// Struct for a sequence of pickbot_msgs__action__PickbotTask_SendGoal_Request.
typedef struct pickbot_msgs__action__PickbotTask_SendGoal_Request__Sequence
{
  pickbot_msgs__action__PickbotTask_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pickbot_msgs__action__PickbotTask_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PickbotTask in the package pickbot_msgs.
typedef struct pickbot_msgs__action__PickbotTask_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} pickbot_msgs__action__PickbotTask_SendGoal_Response;

// Struct for a sequence of pickbot_msgs__action__PickbotTask_SendGoal_Response.
typedef struct pickbot_msgs__action__PickbotTask_SendGoal_Response__Sequence
{
  pickbot_msgs__action__PickbotTask_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pickbot_msgs__action__PickbotTask_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PickbotTask in the package pickbot_msgs.
typedef struct pickbot_msgs__action__PickbotTask_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} pickbot_msgs__action__PickbotTask_GetResult_Request;

// Struct for a sequence of pickbot_msgs__action__PickbotTask_GetResult_Request.
typedef struct pickbot_msgs__action__PickbotTask_GetResult_Request__Sequence
{
  pickbot_msgs__action__PickbotTask_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pickbot_msgs__action__PickbotTask_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "pickbot_msgs/action/detail/pickbot_task__struct.h"

/// Struct defined in action/PickbotTask in the package pickbot_msgs.
typedef struct pickbot_msgs__action__PickbotTask_GetResult_Response
{
  int8_t status;
  pickbot_msgs__action__PickbotTask_Result result;
} pickbot_msgs__action__PickbotTask_GetResult_Response;

// Struct for a sequence of pickbot_msgs__action__PickbotTask_GetResult_Response.
typedef struct pickbot_msgs__action__PickbotTask_GetResult_Response__Sequence
{
  pickbot_msgs__action__PickbotTask_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pickbot_msgs__action__PickbotTask_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "pickbot_msgs/action/detail/pickbot_task__struct.h"

/// Struct defined in action/PickbotTask in the package pickbot_msgs.
typedef struct pickbot_msgs__action__PickbotTask_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  pickbot_msgs__action__PickbotTask_Feedback feedback;
} pickbot_msgs__action__PickbotTask_FeedbackMessage;

// Struct for a sequence of pickbot_msgs__action__PickbotTask_FeedbackMessage.
typedef struct pickbot_msgs__action__PickbotTask_FeedbackMessage__Sequence
{
  pickbot_msgs__action__PickbotTask_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pickbot_msgs__action__PickbotTask_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PICKBOT_MSGS__ACTION__DETAIL__PICKBOT_TASK__STRUCT_H_
