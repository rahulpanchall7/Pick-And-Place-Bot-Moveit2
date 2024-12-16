// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pickbot_msgs:action/PickbotTask.idl
// generated code does not contain a copyright notice

#ifndef PICKBOT_MSGS__ACTION__DETAIL__PICKBOT_TASK__BUILDER_HPP_
#define PICKBOT_MSGS__ACTION__DETAIL__PICKBOT_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pickbot_msgs/action/detail/pickbot_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pickbot_msgs
{

namespace action
{

namespace builder
{

class Init_PickbotTask_Goal_task_number
{
public:
  Init_PickbotTask_Goal_task_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pickbot_msgs::action::PickbotTask_Goal task_number(::pickbot_msgs::action::PickbotTask_Goal::_task_number_type arg)
  {
    msg_.task_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pickbot_msgs::action::PickbotTask_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pickbot_msgs::action::PickbotTask_Goal>()
{
  return pickbot_msgs::action::builder::Init_PickbotTask_Goal_task_number();
}

}  // namespace pickbot_msgs


namespace pickbot_msgs
{

namespace action
{

namespace builder
{

class Init_PickbotTask_Result_success
{
public:
  Init_PickbotTask_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pickbot_msgs::action::PickbotTask_Result success(::pickbot_msgs::action::PickbotTask_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pickbot_msgs::action::PickbotTask_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pickbot_msgs::action::PickbotTask_Result>()
{
  return pickbot_msgs::action::builder::Init_PickbotTask_Result_success();
}

}  // namespace pickbot_msgs


namespace pickbot_msgs
{

namespace action
{

namespace builder
{

class Init_PickbotTask_Feedback_percentage
{
public:
  Init_PickbotTask_Feedback_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pickbot_msgs::action::PickbotTask_Feedback percentage(::pickbot_msgs::action::PickbotTask_Feedback::_percentage_type arg)
  {
    msg_.percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pickbot_msgs::action::PickbotTask_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pickbot_msgs::action::PickbotTask_Feedback>()
{
  return pickbot_msgs::action::builder::Init_PickbotTask_Feedback_percentage();
}

}  // namespace pickbot_msgs


namespace pickbot_msgs
{

namespace action
{

namespace builder
{

class Init_PickbotTask_SendGoal_Request_goal
{
public:
  explicit Init_PickbotTask_SendGoal_Request_goal(::pickbot_msgs::action::PickbotTask_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::pickbot_msgs::action::PickbotTask_SendGoal_Request goal(::pickbot_msgs::action::PickbotTask_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pickbot_msgs::action::PickbotTask_SendGoal_Request msg_;
};

class Init_PickbotTask_SendGoal_Request_goal_id
{
public:
  Init_PickbotTask_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickbotTask_SendGoal_Request_goal goal_id(::pickbot_msgs::action::PickbotTask_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PickbotTask_SendGoal_Request_goal(msg_);
  }

private:
  ::pickbot_msgs::action::PickbotTask_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pickbot_msgs::action::PickbotTask_SendGoal_Request>()
{
  return pickbot_msgs::action::builder::Init_PickbotTask_SendGoal_Request_goal_id();
}

}  // namespace pickbot_msgs


namespace pickbot_msgs
{

namespace action
{

namespace builder
{

class Init_PickbotTask_SendGoal_Response_stamp
{
public:
  explicit Init_PickbotTask_SendGoal_Response_stamp(::pickbot_msgs::action::PickbotTask_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::pickbot_msgs::action::PickbotTask_SendGoal_Response stamp(::pickbot_msgs::action::PickbotTask_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pickbot_msgs::action::PickbotTask_SendGoal_Response msg_;
};

class Init_PickbotTask_SendGoal_Response_accepted
{
public:
  Init_PickbotTask_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickbotTask_SendGoal_Response_stamp accepted(::pickbot_msgs::action::PickbotTask_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PickbotTask_SendGoal_Response_stamp(msg_);
  }

private:
  ::pickbot_msgs::action::PickbotTask_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pickbot_msgs::action::PickbotTask_SendGoal_Response>()
{
  return pickbot_msgs::action::builder::Init_PickbotTask_SendGoal_Response_accepted();
}

}  // namespace pickbot_msgs


namespace pickbot_msgs
{

namespace action
{

namespace builder
{

class Init_PickbotTask_GetResult_Request_goal_id
{
public:
  Init_PickbotTask_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pickbot_msgs::action::PickbotTask_GetResult_Request goal_id(::pickbot_msgs::action::PickbotTask_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pickbot_msgs::action::PickbotTask_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pickbot_msgs::action::PickbotTask_GetResult_Request>()
{
  return pickbot_msgs::action::builder::Init_PickbotTask_GetResult_Request_goal_id();
}

}  // namespace pickbot_msgs


namespace pickbot_msgs
{

namespace action
{

namespace builder
{

class Init_PickbotTask_GetResult_Response_result
{
public:
  explicit Init_PickbotTask_GetResult_Response_result(::pickbot_msgs::action::PickbotTask_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::pickbot_msgs::action::PickbotTask_GetResult_Response result(::pickbot_msgs::action::PickbotTask_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pickbot_msgs::action::PickbotTask_GetResult_Response msg_;
};

class Init_PickbotTask_GetResult_Response_status
{
public:
  Init_PickbotTask_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickbotTask_GetResult_Response_result status(::pickbot_msgs::action::PickbotTask_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PickbotTask_GetResult_Response_result(msg_);
  }

private:
  ::pickbot_msgs::action::PickbotTask_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pickbot_msgs::action::PickbotTask_GetResult_Response>()
{
  return pickbot_msgs::action::builder::Init_PickbotTask_GetResult_Response_status();
}

}  // namespace pickbot_msgs


namespace pickbot_msgs
{

namespace action
{

namespace builder
{

class Init_PickbotTask_FeedbackMessage_feedback
{
public:
  explicit Init_PickbotTask_FeedbackMessage_feedback(::pickbot_msgs::action::PickbotTask_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::pickbot_msgs::action::PickbotTask_FeedbackMessage feedback(::pickbot_msgs::action::PickbotTask_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pickbot_msgs::action::PickbotTask_FeedbackMessage msg_;
};

class Init_PickbotTask_FeedbackMessage_goal_id
{
public:
  Init_PickbotTask_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickbotTask_FeedbackMessage_feedback goal_id(::pickbot_msgs::action::PickbotTask_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PickbotTask_FeedbackMessage_feedback(msg_);
  }

private:
  ::pickbot_msgs::action::PickbotTask_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::pickbot_msgs::action::PickbotTask_FeedbackMessage>()
{
  return pickbot_msgs::action::builder::Init_PickbotTask_FeedbackMessage_goal_id();
}

}  // namespace pickbot_msgs

#endif  // PICKBOT_MSGS__ACTION__DETAIL__PICKBOT_TASK__BUILDER_HPP_
