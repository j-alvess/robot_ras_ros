// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from count_interfaces:action/Count.idl
// generated code does not contain a copyright notice

#ifndef COUNT_INTERFACES__ACTION__DETAIL__COUNT__TRAITS_HPP_
#define COUNT_INTERFACES__ACTION__DETAIL__COUNT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "count_interfaces/action/detail/count__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace count_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Count_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: limit
  {
    out << "limit: ";
    rosidl_generator_traits::value_to_yaml(msg.limit, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Count_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "limit: ";
    rosidl_generator_traits::value_to_yaml(msg.limit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Count_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace count_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use count_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const count_interfaces::action::Count_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  count_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use count_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const count_interfaces::action::Count_Goal & msg)
{
  return count_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<count_interfaces::action::Count_Goal>()
{
  return "count_interfaces::action::Count_Goal";
}

template<>
inline const char * name<count_interfaces::action::Count_Goal>()
{
  return "count_interfaces/action/Count_Goal";
}

template<>
struct has_fixed_size<count_interfaces::action::Count_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<count_interfaces::action::Count_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<count_interfaces::action::Count_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace count_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Count_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: total
  {
    out << "total: ";
    rosidl_generator_traits::value_to_yaml(msg.total, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Count_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total: ";
    rosidl_generator_traits::value_to_yaml(msg.total, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Count_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace count_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use count_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const count_interfaces::action::Count_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  count_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use count_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const count_interfaces::action::Count_Result & msg)
{
  return count_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<count_interfaces::action::Count_Result>()
{
  return "count_interfaces::action::Count_Result";
}

template<>
inline const char * name<count_interfaces::action::Count_Result>()
{
  return "count_interfaces/action/Count_Result";
}

template<>
struct has_fixed_size<count_interfaces::action::Count_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<count_interfaces::action::Count_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<count_interfaces::action::Count_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace count_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Count_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current
  {
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Count_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Count_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace count_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use count_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const count_interfaces::action::Count_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  count_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use count_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const count_interfaces::action::Count_Feedback & msg)
{
  return count_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<count_interfaces::action::Count_Feedback>()
{
  return "count_interfaces::action::Count_Feedback";
}

template<>
inline const char * name<count_interfaces::action::Count_Feedback>()
{
  return "count_interfaces/action/Count_Feedback";
}

template<>
struct has_fixed_size<count_interfaces::action::Count_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<count_interfaces::action::Count_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<count_interfaces::action::Count_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "count_interfaces/action/detail/count__traits.hpp"

namespace count_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Count_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Count_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Count_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace count_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use count_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const count_interfaces::action::Count_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  count_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use count_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const count_interfaces::action::Count_SendGoal_Request & msg)
{
  return count_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<count_interfaces::action::Count_SendGoal_Request>()
{
  return "count_interfaces::action::Count_SendGoal_Request";
}

template<>
inline const char * name<count_interfaces::action::Count_SendGoal_Request>()
{
  return "count_interfaces/action/Count_SendGoal_Request";
}

template<>
struct has_fixed_size<count_interfaces::action::Count_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<count_interfaces::action::Count_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<count_interfaces::action::Count_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<count_interfaces::action::Count_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<count_interfaces::action::Count_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace count_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Count_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Count_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Count_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace count_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use count_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const count_interfaces::action::Count_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  count_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use count_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const count_interfaces::action::Count_SendGoal_Response & msg)
{
  return count_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<count_interfaces::action::Count_SendGoal_Response>()
{
  return "count_interfaces::action::Count_SendGoal_Response";
}

template<>
inline const char * name<count_interfaces::action::Count_SendGoal_Response>()
{
  return "count_interfaces/action/Count_SendGoal_Response";
}

template<>
struct has_fixed_size<count_interfaces::action::Count_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<count_interfaces::action::Count_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<count_interfaces::action::Count_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<count_interfaces::action::Count_SendGoal>()
{
  return "count_interfaces::action::Count_SendGoal";
}

template<>
inline const char * name<count_interfaces::action::Count_SendGoal>()
{
  return "count_interfaces/action/Count_SendGoal";
}

template<>
struct has_fixed_size<count_interfaces::action::Count_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<count_interfaces::action::Count_SendGoal_Request>::value &&
    has_fixed_size<count_interfaces::action::Count_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<count_interfaces::action::Count_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<count_interfaces::action::Count_SendGoal_Request>::value &&
    has_bounded_size<count_interfaces::action::Count_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<count_interfaces::action::Count_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<count_interfaces::action::Count_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<count_interfaces::action::Count_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace count_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Count_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Count_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Count_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace count_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use count_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const count_interfaces::action::Count_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  count_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use count_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const count_interfaces::action::Count_GetResult_Request & msg)
{
  return count_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<count_interfaces::action::Count_GetResult_Request>()
{
  return "count_interfaces::action::Count_GetResult_Request";
}

template<>
inline const char * name<count_interfaces::action::Count_GetResult_Request>()
{
  return "count_interfaces/action/Count_GetResult_Request";
}

template<>
struct has_fixed_size<count_interfaces::action::Count_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<count_interfaces::action::Count_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<count_interfaces::action::Count_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "count_interfaces/action/detail/count__traits.hpp"

namespace count_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Count_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Count_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Count_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace count_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use count_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const count_interfaces::action::Count_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  count_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use count_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const count_interfaces::action::Count_GetResult_Response & msg)
{
  return count_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<count_interfaces::action::Count_GetResult_Response>()
{
  return "count_interfaces::action::Count_GetResult_Response";
}

template<>
inline const char * name<count_interfaces::action::Count_GetResult_Response>()
{
  return "count_interfaces/action/Count_GetResult_Response";
}

template<>
struct has_fixed_size<count_interfaces::action::Count_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<count_interfaces::action::Count_Result>::value> {};

template<>
struct has_bounded_size<count_interfaces::action::Count_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<count_interfaces::action::Count_Result>::value> {};

template<>
struct is_message<count_interfaces::action::Count_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<count_interfaces::action::Count_GetResult>()
{
  return "count_interfaces::action::Count_GetResult";
}

template<>
inline const char * name<count_interfaces::action::Count_GetResult>()
{
  return "count_interfaces/action/Count_GetResult";
}

template<>
struct has_fixed_size<count_interfaces::action::Count_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<count_interfaces::action::Count_GetResult_Request>::value &&
    has_fixed_size<count_interfaces::action::Count_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<count_interfaces::action::Count_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<count_interfaces::action::Count_GetResult_Request>::value &&
    has_bounded_size<count_interfaces::action::Count_GetResult_Response>::value
  >
{
};

template<>
struct is_service<count_interfaces::action::Count_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<count_interfaces::action::Count_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<count_interfaces::action::Count_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "count_interfaces/action/detail/count__traits.hpp"

namespace count_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Count_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Count_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Count_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace count_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use count_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const count_interfaces::action::Count_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  count_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use count_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const count_interfaces::action::Count_FeedbackMessage & msg)
{
  return count_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<count_interfaces::action::Count_FeedbackMessage>()
{
  return "count_interfaces::action::Count_FeedbackMessage";
}

template<>
inline const char * name<count_interfaces::action::Count_FeedbackMessage>()
{
  return "count_interfaces/action/Count_FeedbackMessage";
}

template<>
struct has_fixed_size<count_interfaces::action::Count_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<count_interfaces::action::Count_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<count_interfaces::action::Count_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<count_interfaces::action::Count_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<count_interfaces::action::Count_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<count_interfaces::action::Count>
  : std::true_type
{
};

template<>
struct is_action_goal<count_interfaces::action::Count_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<count_interfaces::action::Count_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<count_interfaces::action::Count_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // COUNT_INTERFACES__ACTION__DETAIL__COUNT__TRAITS_HPP_
