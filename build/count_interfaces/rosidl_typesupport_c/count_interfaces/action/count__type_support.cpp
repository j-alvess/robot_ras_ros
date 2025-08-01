// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from count_interfaces:action/Count.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "count_interfaces/action/detail/count__struct.h"
#include "count_interfaces/action/detail/count__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace count_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Count_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Count_Goal_type_support_ids_t;

static const _Count_Goal_type_support_ids_t _Count_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Count_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Count_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Count_Goal_type_support_symbol_names_t _Count_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, count_interfaces, action, Count_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, count_interfaces, action, Count_Goal)),
  }
};

typedef struct _Count_Goal_type_support_data_t
{
  void * data[2];
} _Count_Goal_type_support_data_t;

static _Count_Goal_type_support_data_t _Count_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Count_Goal_message_typesupport_map = {
  2,
  "count_interfaces",
  &_Count_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Count_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Count_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Count_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Count_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace count_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, count_interfaces, action, Count_Goal)() {
  return &::count_interfaces::action::rosidl_typesupport_c::Count_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "count_interfaces/action/detail/count__struct.h"
// already included above
// #include "count_interfaces/action/detail/count__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace count_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Count_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Count_Result_type_support_ids_t;

static const _Count_Result_type_support_ids_t _Count_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Count_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Count_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Count_Result_type_support_symbol_names_t _Count_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, count_interfaces, action, Count_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, count_interfaces, action, Count_Result)),
  }
};

typedef struct _Count_Result_type_support_data_t
{
  void * data[2];
} _Count_Result_type_support_data_t;

static _Count_Result_type_support_data_t _Count_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Count_Result_message_typesupport_map = {
  2,
  "count_interfaces",
  &_Count_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Count_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Count_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Count_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Count_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace count_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, count_interfaces, action, Count_Result)() {
  return &::count_interfaces::action::rosidl_typesupport_c::Count_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "count_interfaces/action/detail/count__struct.h"
// already included above
// #include "count_interfaces/action/detail/count__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace count_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Count_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Count_Feedback_type_support_ids_t;

static const _Count_Feedback_type_support_ids_t _Count_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Count_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Count_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Count_Feedback_type_support_symbol_names_t _Count_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, count_interfaces, action, Count_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, count_interfaces, action, Count_Feedback)),
  }
};

typedef struct _Count_Feedback_type_support_data_t
{
  void * data[2];
} _Count_Feedback_type_support_data_t;

static _Count_Feedback_type_support_data_t _Count_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Count_Feedback_message_typesupport_map = {
  2,
  "count_interfaces",
  &_Count_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Count_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Count_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Count_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Count_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace count_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, count_interfaces, action, Count_Feedback)() {
  return &::count_interfaces::action::rosidl_typesupport_c::Count_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "count_interfaces/action/detail/count__struct.h"
// already included above
// #include "count_interfaces/action/detail/count__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace count_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Count_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Count_SendGoal_Request_type_support_ids_t;

static const _Count_SendGoal_Request_type_support_ids_t _Count_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Count_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Count_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Count_SendGoal_Request_type_support_symbol_names_t _Count_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, count_interfaces, action, Count_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, count_interfaces, action, Count_SendGoal_Request)),
  }
};

typedef struct _Count_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Count_SendGoal_Request_type_support_data_t;

static _Count_SendGoal_Request_type_support_data_t _Count_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Count_SendGoal_Request_message_typesupport_map = {
  2,
  "count_interfaces",
  &_Count_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Count_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Count_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Count_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Count_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace count_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, count_interfaces, action, Count_SendGoal_Request)() {
  return &::count_interfaces::action::rosidl_typesupport_c::Count_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "count_interfaces/action/detail/count__struct.h"
// already included above
// #include "count_interfaces/action/detail/count__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace count_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Count_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Count_SendGoal_Response_type_support_ids_t;

static const _Count_SendGoal_Response_type_support_ids_t _Count_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Count_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Count_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Count_SendGoal_Response_type_support_symbol_names_t _Count_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, count_interfaces, action, Count_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, count_interfaces, action, Count_SendGoal_Response)),
  }
};

typedef struct _Count_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Count_SendGoal_Response_type_support_data_t;

static _Count_SendGoal_Response_type_support_data_t _Count_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Count_SendGoal_Response_message_typesupport_map = {
  2,
  "count_interfaces",
  &_Count_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Count_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Count_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Count_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Count_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace count_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, count_interfaces, action, Count_SendGoal_Response)() {
  return &::count_interfaces::action::rosidl_typesupport_c::Count_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "count_interfaces/action/detail/count__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace count_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Count_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Count_SendGoal_type_support_ids_t;

static const _Count_SendGoal_type_support_ids_t _Count_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Count_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Count_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Count_SendGoal_type_support_symbol_names_t _Count_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, count_interfaces, action, Count_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, count_interfaces, action, Count_SendGoal)),
  }
};

typedef struct _Count_SendGoal_type_support_data_t
{
  void * data[2];
} _Count_SendGoal_type_support_data_t;

static _Count_SendGoal_type_support_data_t _Count_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Count_SendGoal_service_typesupport_map = {
  2,
  "count_interfaces",
  &_Count_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Count_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Count_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Count_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Count_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace count_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, count_interfaces, action, Count_SendGoal)() {
  return &::count_interfaces::action::rosidl_typesupport_c::Count_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "count_interfaces/action/detail/count__struct.h"
// already included above
// #include "count_interfaces/action/detail/count__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace count_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Count_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Count_GetResult_Request_type_support_ids_t;

static const _Count_GetResult_Request_type_support_ids_t _Count_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Count_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Count_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Count_GetResult_Request_type_support_symbol_names_t _Count_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, count_interfaces, action, Count_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, count_interfaces, action, Count_GetResult_Request)),
  }
};

typedef struct _Count_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Count_GetResult_Request_type_support_data_t;

static _Count_GetResult_Request_type_support_data_t _Count_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Count_GetResult_Request_message_typesupport_map = {
  2,
  "count_interfaces",
  &_Count_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Count_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Count_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Count_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Count_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace count_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, count_interfaces, action, Count_GetResult_Request)() {
  return &::count_interfaces::action::rosidl_typesupport_c::Count_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "count_interfaces/action/detail/count__struct.h"
// already included above
// #include "count_interfaces/action/detail/count__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace count_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Count_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Count_GetResult_Response_type_support_ids_t;

static const _Count_GetResult_Response_type_support_ids_t _Count_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Count_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Count_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Count_GetResult_Response_type_support_symbol_names_t _Count_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, count_interfaces, action, Count_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, count_interfaces, action, Count_GetResult_Response)),
  }
};

typedef struct _Count_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Count_GetResult_Response_type_support_data_t;

static _Count_GetResult_Response_type_support_data_t _Count_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Count_GetResult_Response_message_typesupport_map = {
  2,
  "count_interfaces",
  &_Count_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Count_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Count_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Count_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Count_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace count_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, count_interfaces, action, Count_GetResult_Response)() {
  return &::count_interfaces::action::rosidl_typesupport_c::Count_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "count_interfaces/action/detail/count__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace count_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Count_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Count_GetResult_type_support_ids_t;

static const _Count_GetResult_type_support_ids_t _Count_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Count_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Count_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Count_GetResult_type_support_symbol_names_t _Count_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, count_interfaces, action, Count_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, count_interfaces, action, Count_GetResult)),
  }
};

typedef struct _Count_GetResult_type_support_data_t
{
  void * data[2];
} _Count_GetResult_type_support_data_t;

static _Count_GetResult_type_support_data_t _Count_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Count_GetResult_service_typesupport_map = {
  2,
  "count_interfaces",
  &_Count_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Count_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Count_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Count_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Count_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace count_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, count_interfaces, action, Count_GetResult)() {
  return &::count_interfaces::action::rosidl_typesupport_c::Count_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "count_interfaces/action/detail/count__struct.h"
// already included above
// #include "count_interfaces/action/detail/count__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace count_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Count_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Count_FeedbackMessage_type_support_ids_t;

static const _Count_FeedbackMessage_type_support_ids_t _Count_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Count_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Count_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Count_FeedbackMessage_type_support_symbol_names_t _Count_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, count_interfaces, action, Count_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, count_interfaces, action, Count_FeedbackMessage)),
  }
};

typedef struct _Count_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Count_FeedbackMessage_type_support_data_t;

static _Count_FeedbackMessage_type_support_data_t _Count_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Count_FeedbackMessage_message_typesupport_map = {
  2,
  "count_interfaces",
  &_Count_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Count_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Count_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Count_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Count_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace count_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, count_interfaces, action, Count_FeedbackMessage)() {
  return &::count_interfaces::action::rosidl_typesupport_c::Count_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "count_interfaces/action/count.h"
// already included above
// #include "count_interfaces/action/detail/count__type_support.h"

static rosidl_action_type_support_t _count_interfaces__action__Count__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, count_interfaces, action, Count)()
{
  // Thread-safe by always writing the same values to the static struct
  _count_interfaces__action__Count__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, count_interfaces, action, Count_SendGoal)();
  _count_interfaces__action__Count__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, count_interfaces, action, Count_GetResult)();
  _count_interfaces__action__Count__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _count_interfaces__action__Count__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, count_interfaces, action, Count_FeedbackMessage)();
  _count_interfaces__action__Count__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_count_interfaces__action__Count__typesupport_c;
}

#ifdef __cplusplus
}
#endif
