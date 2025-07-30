// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from count_interfaces:action/Count.idl
// generated code does not contain a copyright notice

#ifndef COUNT_INTERFACES__ACTION__DETAIL__COUNT__BUILDER_HPP_
#define COUNT_INTERFACES__ACTION__DETAIL__COUNT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "count_interfaces/action/detail/count__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace count_interfaces
{

namespace action
{

namespace builder
{

class Init_Count_Goal_limit
{
public:
  Init_Count_Goal_limit()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::count_interfaces::action::Count_Goal limit(::count_interfaces::action::Count_Goal::_limit_type arg)
  {
    msg_.limit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::count_interfaces::action::Count_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::count_interfaces::action::Count_Goal>()
{
  return count_interfaces::action::builder::Init_Count_Goal_limit();
}

}  // namespace count_interfaces


namespace count_interfaces
{

namespace action
{

namespace builder
{

class Init_Count_Result_total
{
public:
  Init_Count_Result_total()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::count_interfaces::action::Count_Result total(::count_interfaces::action::Count_Result::_total_type arg)
  {
    msg_.total = std::move(arg);
    return std::move(msg_);
  }

private:
  ::count_interfaces::action::Count_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::count_interfaces::action::Count_Result>()
{
  return count_interfaces::action::builder::Init_Count_Result_total();
}

}  // namespace count_interfaces


namespace count_interfaces
{

namespace action
{

namespace builder
{

class Init_Count_Feedback_current
{
public:
  Init_Count_Feedback_current()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::count_interfaces::action::Count_Feedback current(::count_interfaces::action::Count_Feedback::_current_type arg)
  {
    msg_.current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::count_interfaces::action::Count_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::count_interfaces::action::Count_Feedback>()
{
  return count_interfaces::action::builder::Init_Count_Feedback_current();
}

}  // namespace count_interfaces


namespace count_interfaces
{

namespace action
{

namespace builder
{

class Init_Count_SendGoal_Request_goal
{
public:
  explicit Init_Count_SendGoal_Request_goal(::count_interfaces::action::Count_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::count_interfaces::action::Count_SendGoal_Request goal(::count_interfaces::action::Count_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::count_interfaces::action::Count_SendGoal_Request msg_;
};

class Init_Count_SendGoal_Request_goal_id
{
public:
  Init_Count_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Count_SendGoal_Request_goal goal_id(::count_interfaces::action::Count_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Count_SendGoal_Request_goal(msg_);
  }

private:
  ::count_interfaces::action::Count_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::count_interfaces::action::Count_SendGoal_Request>()
{
  return count_interfaces::action::builder::Init_Count_SendGoal_Request_goal_id();
}

}  // namespace count_interfaces


namespace count_interfaces
{

namespace action
{

namespace builder
{

class Init_Count_SendGoal_Response_stamp
{
public:
  explicit Init_Count_SendGoal_Response_stamp(::count_interfaces::action::Count_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::count_interfaces::action::Count_SendGoal_Response stamp(::count_interfaces::action::Count_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::count_interfaces::action::Count_SendGoal_Response msg_;
};

class Init_Count_SendGoal_Response_accepted
{
public:
  Init_Count_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Count_SendGoal_Response_stamp accepted(::count_interfaces::action::Count_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Count_SendGoal_Response_stamp(msg_);
  }

private:
  ::count_interfaces::action::Count_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::count_interfaces::action::Count_SendGoal_Response>()
{
  return count_interfaces::action::builder::Init_Count_SendGoal_Response_accepted();
}

}  // namespace count_interfaces


namespace count_interfaces
{

namespace action
{

namespace builder
{

class Init_Count_GetResult_Request_goal_id
{
public:
  Init_Count_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::count_interfaces::action::Count_GetResult_Request goal_id(::count_interfaces::action::Count_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::count_interfaces::action::Count_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::count_interfaces::action::Count_GetResult_Request>()
{
  return count_interfaces::action::builder::Init_Count_GetResult_Request_goal_id();
}

}  // namespace count_interfaces


namespace count_interfaces
{

namespace action
{

namespace builder
{

class Init_Count_GetResult_Response_result
{
public:
  explicit Init_Count_GetResult_Response_result(::count_interfaces::action::Count_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::count_interfaces::action::Count_GetResult_Response result(::count_interfaces::action::Count_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::count_interfaces::action::Count_GetResult_Response msg_;
};

class Init_Count_GetResult_Response_status
{
public:
  Init_Count_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Count_GetResult_Response_result status(::count_interfaces::action::Count_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Count_GetResult_Response_result(msg_);
  }

private:
  ::count_interfaces::action::Count_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::count_interfaces::action::Count_GetResult_Response>()
{
  return count_interfaces::action::builder::Init_Count_GetResult_Response_status();
}

}  // namespace count_interfaces


namespace count_interfaces
{

namespace action
{

namespace builder
{

class Init_Count_FeedbackMessage_feedback
{
public:
  explicit Init_Count_FeedbackMessage_feedback(::count_interfaces::action::Count_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::count_interfaces::action::Count_FeedbackMessage feedback(::count_interfaces::action::Count_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::count_interfaces::action::Count_FeedbackMessage msg_;
};

class Init_Count_FeedbackMessage_goal_id
{
public:
  Init_Count_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Count_FeedbackMessage_feedback goal_id(::count_interfaces::action::Count_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Count_FeedbackMessage_feedback(msg_);
  }

private:
  ::count_interfaces::action::Count_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::count_interfaces::action::Count_FeedbackMessage>()
{
  return count_interfaces::action::builder::Init_Count_FeedbackMessage_goal_id();
}

}  // namespace count_interfaces

#endif  // COUNT_INTERFACES__ACTION__DETAIL__COUNT__BUILDER_HPP_
