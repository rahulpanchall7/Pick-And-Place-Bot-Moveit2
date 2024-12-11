// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pickbot_msgs:srv/QuaternionToEuler.idl
// generated code does not contain a copyright notice

#ifndef PICKBOT_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__BUILDER_HPP_
#define PICKBOT_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pickbot_msgs/srv/detail/quaternion_to_euler__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pickbot_msgs
{

namespace srv
{

namespace builder
{

class Init_QuaternionToEuler_Request_w
{
public:
  explicit Init_QuaternionToEuler_Request_w(::pickbot_msgs::srv::QuaternionToEuler_Request & msg)
  : msg_(msg)
  {}
  ::pickbot_msgs::srv::QuaternionToEuler_Request w(::pickbot_msgs::srv::QuaternionToEuler_Request::_w_type arg)
  {
    msg_.w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pickbot_msgs::srv::QuaternionToEuler_Request msg_;
};

class Init_QuaternionToEuler_Request_z
{
public:
  explicit Init_QuaternionToEuler_Request_z(::pickbot_msgs::srv::QuaternionToEuler_Request & msg)
  : msg_(msg)
  {}
  Init_QuaternionToEuler_Request_w z(::pickbot_msgs::srv::QuaternionToEuler_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_QuaternionToEuler_Request_w(msg_);
  }

private:
  ::pickbot_msgs::srv::QuaternionToEuler_Request msg_;
};

class Init_QuaternionToEuler_Request_y
{
public:
  explicit Init_QuaternionToEuler_Request_y(::pickbot_msgs::srv::QuaternionToEuler_Request & msg)
  : msg_(msg)
  {}
  Init_QuaternionToEuler_Request_z y(::pickbot_msgs::srv::QuaternionToEuler_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_QuaternionToEuler_Request_z(msg_);
  }

private:
  ::pickbot_msgs::srv::QuaternionToEuler_Request msg_;
};

class Init_QuaternionToEuler_Request_x
{
public:
  Init_QuaternionToEuler_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuaternionToEuler_Request_y x(::pickbot_msgs::srv::QuaternionToEuler_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_QuaternionToEuler_Request_y(msg_);
  }

private:
  ::pickbot_msgs::srv::QuaternionToEuler_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pickbot_msgs::srv::QuaternionToEuler_Request>()
{
  return pickbot_msgs::srv::builder::Init_QuaternionToEuler_Request_x();
}

}  // namespace pickbot_msgs


namespace pickbot_msgs
{

namespace srv
{

namespace builder
{

class Init_QuaternionToEuler_Response_yaw
{
public:
  explicit Init_QuaternionToEuler_Response_yaw(::pickbot_msgs::srv::QuaternionToEuler_Response & msg)
  : msg_(msg)
  {}
  ::pickbot_msgs::srv::QuaternionToEuler_Response yaw(::pickbot_msgs::srv::QuaternionToEuler_Response::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pickbot_msgs::srv::QuaternionToEuler_Response msg_;
};

class Init_QuaternionToEuler_Response_pitch
{
public:
  explicit Init_QuaternionToEuler_Response_pitch(::pickbot_msgs::srv::QuaternionToEuler_Response & msg)
  : msg_(msg)
  {}
  Init_QuaternionToEuler_Response_yaw pitch(::pickbot_msgs::srv::QuaternionToEuler_Response::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_QuaternionToEuler_Response_yaw(msg_);
  }

private:
  ::pickbot_msgs::srv::QuaternionToEuler_Response msg_;
};

class Init_QuaternionToEuler_Response_roll
{
public:
  Init_QuaternionToEuler_Response_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuaternionToEuler_Response_pitch roll(::pickbot_msgs::srv::QuaternionToEuler_Response::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_QuaternionToEuler_Response_pitch(msg_);
  }

private:
  ::pickbot_msgs::srv::QuaternionToEuler_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pickbot_msgs::srv::QuaternionToEuler_Response>()
{
  return pickbot_msgs::srv::builder::Init_QuaternionToEuler_Response_roll();
}

}  // namespace pickbot_msgs

#endif  // PICKBOT_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__BUILDER_HPP_
