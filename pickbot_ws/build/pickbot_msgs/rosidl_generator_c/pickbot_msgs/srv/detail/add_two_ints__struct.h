// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pickbot_msgs:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef PICKBOT_MSGS__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
#define PICKBOT_MSGS__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddTwoInts in the package pickbot_msgs.
typedef struct pickbot_msgs__srv__AddTwoInts_Request
{
  int64_t a;
  int64_t b;
} pickbot_msgs__srv__AddTwoInts_Request;

// Struct for a sequence of pickbot_msgs__srv__AddTwoInts_Request.
typedef struct pickbot_msgs__srv__AddTwoInts_Request__Sequence
{
  pickbot_msgs__srv__AddTwoInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pickbot_msgs__srv__AddTwoInts_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddTwoInts in the package pickbot_msgs.
typedef struct pickbot_msgs__srv__AddTwoInts_Response
{
  int64_t sum;
} pickbot_msgs__srv__AddTwoInts_Response;

// Struct for a sequence of pickbot_msgs__srv__AddTwoInts_Response.
typedef struct pickbot_msgs__srv__AddTwoInts_Response__Sequence
{
  pickbot_msgs__srv__AddTwoInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pickbot_msgs__srv__AddTwoInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PICKBOT_MSGS__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
