// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pickbot_msgs:srv/QuaternionToEuler.idl
// generated code does not contain a copyright notice

#ifndef PICKBOT_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__STRUCT_HPP_
#define PICKBOT_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pickbot_msgs__srv__QuaternionToEuler_Request __attribute__((deprecated))
#else
# define DEPRECATED__pickbot_msgs__srv__QuaternionToEuler_Request __declspec(deprecated)
#endif

namespace pickbot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct QuaternionToEuler_Request_
{
  using Type = QuaternionToEuler_Request_<ContainerAllocator>;

  explicit QuaternionToEuler_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->w = 0.0;
    }
  }

  explicit QuaternionToEuler_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->w = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _w_type =
    double;
  _w_type w;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__w(
    const double & _arg)
  {
    this->w = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pickbot_msgs::srv::QuaternionToEuler_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pickbot_msgs::srv::QuaternionToEuler_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pickbot_msgs::srv::QuaternionToEuler_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pickbot_msgs::srv::QuaternionToEuler_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pickbot_msgs::srv::QuaternionToEuler_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pickbot_msgs::srv::QuaternionToEuler_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pickbot_msgs::srv::QuaternionToEuler_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pickbot_msgs::srv::QuaternionToEuler_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pickbot_msgs::srv::QuaternionToEuler_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pickbot_msgs::srv::QuaternionToEuler_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pickbot_msgs__srv__QuaternionToEuler_Request
    std::shared_ptr<pickbot_msgs::srv::QuaternionToEuler_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pickbot_msgs__srv__QuaternionToEuler_Request
    std::shared_ptr<pickbot_msgs::srv::QuaternionToEuler_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QuaternionToEuler_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->w != other.w) {
      return false;
    }
    return true;
  }
  bool operator!=(const QuaternionToEuler_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QuaternionToEuler_Request_

// alias to use template instance with default allocator
using QuaternionToEuler_Request =
  pickbot_msgs::srv::QuaternionToEuler_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pickbot_msgs


#ifndef _WIN32
# define DEPRECATED__pickbot_msgs__srv__QuaternionToEuler_Response __attribute__((deprecated))
#else
# define DEPRECATED__pickbot_msgs__srv__QuaternionToEuler_Response __declspec(deprecated)
#endif

namespace pickbot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct QuaternionToEuler_Response_
{
  using Type = QuaternionToEuler_Response_<ContainerAllocator>;

  explicit QuaternionToEuler_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
    }
  }

  explicit QuaternionToEuler_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
    }
  }

  // field types and members
  using _roll_type =
    double;
  _roll_type roll;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _yaw_type =
    double;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pickbot_msgs::srv::QuaternionToEuler_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pickbot_msgs::srv::QuaternionToEuler_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pickbot_msgs::srv::QuaternionToEuler_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pickbot_msgs::srv::QuaternionToEuler_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pickbot_msgs::srv::QuaternionToEuler_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pickbot_msgs::srv::QuaternionToEuler_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pickbot_msgs::srv::QuaternionToEuler_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pickbot_msgs::srv::QuaternionToEuler_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pickbot_msgs::srv::QuaternionToEuler_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pickbot_msgs::srv::QuaternionToEuler_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pickbot_msgs__srv__QuaternionToEuler_Response
    std::shared_ptr<pickbot_msgs::srv::QuaternionToEuler_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pickbot_msgs__srv__QuaternionToEuler_Response
    std::shared_ptr<pickbot_msgs::srv::QuaternionToEuler_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QuaternionToEuler_Response_ & other) const
  {
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const QuaternionToEuler_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QuaternionToEuler_Response_

// alias to use template instance with default allocator
using QuaternionToEuler_Response =
  pickbot_msgs::srv::QuaternionToEuler_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pickbot_msgs

namespace pickbot_msgs
{

namespace srv
{

struct QuaternionToEuler
{
  using Request = pickbot_msgs::srv::QuaternionToEuler_Request;
  using Response = pickbot_msgs::srv::QuaternionToEuler_Response;
};

}  // namespace srv

}  // namespace pickbot_msgs

#endif  // PICKBOT_MSGS__SRV__DETAIL__QUATERNION_TO_EULER__STRUCT_HPP_
