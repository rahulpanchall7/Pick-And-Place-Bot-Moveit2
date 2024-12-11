// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pickbot_msgs:srv/EulerToQuaternion.idl
// generated code does not contain a copyright notice

#ifndef PICKBOT_MSGS__SRV__DETAIL__EULER_TO_QUATERNION__STRUCT_H_
#define PICKBOT_MSGS__SRV__DETAIL__EULER_TO_QUATERNION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/EulerToQuaternion in the package pickbot_msgs.
typedef struct pickbot_msgs__srv__EulerToQuaternion_Request
{
  double roll;
  double pitch;
  double yaw;
} pickbot_msgs__srv__EulerToQuaternion_Request;

// Struct for a sequence of pickbot_msgs__srv__EulerToQuaternion_Request.
typedef struct pickbot_msgs__srv__EulerToQuaternion_Request__Sequence
{
  pickbot_msgs__srv__EulerToQuaternion_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pickbot_msgs__srv__EulerToQuaternion_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/EulerToQuaternion in the package pickbot_msgs.
typedef struct pickbot_msgs__srv__EulerToQuaternion_Response
{
  double x;
  double y;
  double z;
  double w;
} pickbot_msgs__srv__EulerToQuaternion_Response;

// Struct for a sequence of pickbot_msgs__srv__EulerToQuaternion_Response.
typedef struct pickbot_msgs__srv__EulerToQuaternion_Response__Sequence
{
  pickbot_msgs__srv__EulerToQuaternion_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pickbot_msgs__srv__EulerToQuaternion_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PICKBOT_MSGS__SRV__DETAIL__EULER_TO_QUATERNION__STRUCT_H_
