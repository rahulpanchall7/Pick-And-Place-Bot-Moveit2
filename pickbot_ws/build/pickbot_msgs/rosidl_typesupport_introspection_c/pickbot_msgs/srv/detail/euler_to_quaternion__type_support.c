// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pickbot_msgs:srv/EulerToQuaternion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pickbot_msgs/srv/detail/euler_to_quaternion__rosidl_typesupport_introspection_c.h"
#include "pickbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pickbot_msgs/srv/detail/euler_to_quaternion__functions.h"
#include "pickbot_msgs/srv/detail/euler_to_quaternion__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void pickbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pickbot_msgs__srv__EulerToQuaternion_Request__init(message_memory);
}

void pickbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_fini_function(void * message_memory)
{
  pickbot_msgs__srv__EulerToQuaternion_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pickbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_message_member_array[3] = {
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pickbot_msgs__srv__EulerToQuaternion_Request, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pickbot_msgs__srv__EulerToQuaternion_Request, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pickbot_msgs__srv__EulerToQuaternion_Request, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pickbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_message_members = {
  "pickbot_msgs__srv",  // message namespace
  "EulerToQuaternion_Request",  // message name
  3,  // number of fields
  sizeof(pickbot_msgs__srv__EulerToQuaternion_Request),
  pickbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_message_member_array,  // message members
  pickbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  pickbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pickbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_message_type_support_handle = {
  0,
  &pickbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pickbot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pickbot_msgs, srv, EulerToQuaternion_Request)() {
  if (!pickbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_message_type_support_handle.typesupport_identifier) {
    pickbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pickbot_msgs__srv__EulerToQuaternion_Request__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pickbot_msgs/srv/detail/euler_to_quaternion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pickbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pickbot_msgs/srv/detail/euler_to_quaternion__functions.h"
// already included above
// #include "pickbot_msgs/srv/detail/euler_to_quaternion__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void pickbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pickbot_msgs__srv__EulerToQuaternion_Response__init(message_memory);
}

void pickbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_fini_function(void * message_memory)
{
  pickbot_msgs__srv__EulerToQuaternion_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pickbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pickbot_msgs__srv__EulerToQuaternion_Response, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pickbot_msgs__srv__EulerToQuaternion_Response, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pickbot_msgs__srv__EulerToQuaternion_Response, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "w",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pickbot_msgs__srv__EulerToQuaternion_Response, w),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pickbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_message_members = {
  "pickbot_msgs__srv",  // message namespace
  "EulerToQuaternion_Response",  // message name
  4,  // number of fields
  sizeof(pickbot_msgs__srv__EulerToQuaternion_Response),
  pickbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_message_member_array,  // message members
  pickbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  pickbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pickbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_message_type_support_handle = {
  0,
  &pickbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pickbot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pickbot_msgs, srv, EulerToQuaternion_Response)() {
  if (!pickbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_message_type_support_handle.typesupport_identifier) {
    pickbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pickbot_msgs__srv__EulerToQuaternion_Response__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pickbot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pickbot_msgs/srv/detail/euler_to_quaternion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pickbot_msgs__srv__detail__euler_to_quaternion__rosidl_typesupport_introspection_c__EulerToQuaternion_service_members = {
  "pickbot_msgs__srv",  // service namespace
  "EulerToQuaternion",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // pickbot_msgs__srv__detail__euler_to_quaternion__rosidl_typesupport_introspection_c__EulerToQuaternion_Request_message_type_support_handle,
  NULL  // response message
  // pickbot_msgs__srv__detail__euler_to_quaternion__rosidl_typesupport_introspection_c__EulerToQuaternion_Response_message_type_support_handle
};

static rosidl_service_type_support_t pickbot_msgs__srv__detail__euler_to_quaternion__rosidl_typesupport_introspection_c__EulerToQuaternion_service_type_support_handle = {
  0,
  &pickbot_msgs__srv__detail__euler_to_quaternion__rosidl_typesupport_introspection_c__EulerToQuaternion_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pickbot_msgs, srv, EulerToQuaternion_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pickbot_msgs, srv, EulerToQuaternion_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pickbot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pickbot_msgs, srv, EulerToQuaternion)() {
  if (!pickbot_msgs__srv__detail__euler_to_quaternion__rosidl_typesupport_introspection_c__EulerToQuaternion_service_type_support_handle.typesupport_identifier) {
    pickbot_msgs__srv__detail__euler_to_quaternion__rosidl_typesupport_introspection_c__EulerToQuaternion_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pickbot_msgs__srv__detail__euler_to_quaternion__rosidl_typesupport_introspection_c__EulerToQuaternion_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pickbot_msgs, srv, EulerToQuaternion_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pickbot_msgs, srv, EulerToQuaternion_Response)()->data;
  }

  return &pickbot_msgs__srv__detail__euler_to_quaternion__rosidl_typesupport_introspection_c__EulerToQuaternion_service_type_support_handle;
}
