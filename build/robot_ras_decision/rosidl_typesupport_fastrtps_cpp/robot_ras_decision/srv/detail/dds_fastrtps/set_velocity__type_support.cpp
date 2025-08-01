// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robot_ras_decision:srv/SetVelocity.idl
// generated code does not contain a copyright notice
#include "robot_ras_decision/srv/detail/set_velocity__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robot_ras_decision/srv/detail/set_velocity__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace robot_ras_decision
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_ras_decision
cdr_serialize(
  const robot_ras_decision::srv::SetVelocity_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: linear_velocity
  cdr << ros_message.linear_velocity;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_ras_decision
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robot_ras_decision::srv::SetVelocity_Request & ros_message)
{
  // Member: linear_velocity
  cdr >> ros_message.linear_velocity;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_ras_decision
get_serialized_size(
  const robot_ras_decision::srv::SetVelocity_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: linear_velocity
  {
    size_t item_size = sizeof(ros_message.linear_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_ras_decision
max_serialized_size_SetVelocity_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: linear_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robot_ras_decision::srv::SetVelocity_Request;
    is_plain =
      (
      offsetof(DataType, linear_velocity) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetVelocity_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robot_ras_decision::srv::SetVelocity_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetVelocity_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robot_ras_decision::srv::SetVelocity_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetVelocity_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robot_ras_decision::srv::SetVelocity_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetVelocity_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetVelocity_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetVelocity_Request__callbacks = {
  "robot_ras_decision::srv",
  "SetVelocity_Request",
  _SetVelocity_Request__cdr_serialize,
  _SetVelocity_Request__cdr_deserialize,
  _SetVelocity_Request__get_serialized_size,
  _SetVelocity_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetVelocity_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetVelocity_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace robot_ras_decision

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robot_ras_decision
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_ras_decision::srv::SetVelocity_Request>()
{
  return &robot_ras_decision::srv::typesupport_fastrtps_cpp::_SetVelocity_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_ras_decision, srv, SetVelocity_Request)() {
  return &robot_ras_decision::srv::typesupport_fastrtps_cpp::_SetVelocity_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace robot_ras_decision
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_ras_decision
cdr_serialize(
  const robot_ras_decision::srv::SetVelocity_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: sucesso
  cdr << (ros_message.sucesso ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_ras_decision
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robot_ras_decision::srv::SetVelocity_Response & ros_message)
{
  // Member: sucesso
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sucesso = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_ras_decision
get_serialized_size(
  const robot_ras_decision::srv::SetVelocity_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: sucesso
  {
    size_t item_size = sizeof(ros_message.sucesso);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_ras_decision
max_serialized_size_SetVelocity_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: sucesso
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robot_ras_decision::srv::SetVelocity_Response;
    is_plain =
      (
      offsetof(DataType, sucesso) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetVelocity_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robot_ras_decision::srv::SetVelocity_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetVelocity_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robot_ras_decision::srv::SetVelocity_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetVelocity_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robot_ras_decision::srv::SetVelocity_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetVelocity_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetVelocity_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetVelocity_Response__callbacks = {
  "robot_ras_decision::srv",
  "SetVelocity_Response",
  _SetVelocity_Response__cdr_serialize,
  _SetVelocity_Response__cdr_deserialize,
  _SetVelocity_Response__get_serialized_size,
  _SetVelocity_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetVelocity_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetVelocity_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace robot_ras_decision

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robot_ras_decision
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_ras_decision::srv::SetVelocity_Response>()
{
  return &robot_ras_decision::srv::typesupport_fastrtps_cpp::_SetVelocity_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_ras_decision, srv, SetVelocity_Response)() {
  return &robot_ras_decision::srv::typesupport_fastrtps_cpp::_SetVelocity_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace robot_ras_decision
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SetVelocity__callbacks = {
  "robot_ras_decision::srv",
  "SetVelocity",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_ras_decision, srv, SetVelocity_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_ras_decision, srv, SetVelocity_Response)(),
};

static rosidl_service_type_support_t _SetVelocity__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetVelocity__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace robot_ras_decision

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robot_ras_decision
const rosidl_service_type_support_t *
get_service_type_support_handle<robot_ras_decision::srv::SetVelocity>()
{
  return &robot_ras_decision::srv::typesupport_fastrtps_cpp::_SetVelocity__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_ras_decision, srv, SetVelocity)() {
  return &robot_ras_decision::srv::typesupport_fastrtps_cpp::_SetVelocity__handle;
}

#ifdef __cplusplus
}
#endif
