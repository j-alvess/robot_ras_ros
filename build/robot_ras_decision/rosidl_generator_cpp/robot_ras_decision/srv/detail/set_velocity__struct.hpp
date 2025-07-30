// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_ras_decision:srv/SetVelocity.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_RAS_DECISION__SRV__DETAIL__SET_VELOCITY__STRUCT_HPP_
#define ROBOT_RAS_DECISION__SRV__DETAIL__SET_VELOCITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_ras_decision__srv__SetVelocity_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_ras_decision__srv__SetVelocity_Request __declspec(deprecated)
#endif

namespace robot_ras_decision
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetVelocity_Request_
{
  using Type = SetVelocity_Request_<ContainerAllocator>;

  explicit SetVelocity_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_velocity = 0.0f;
    }
  }

  explicit SetVelocity_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_velocity = 0.0f;
    }
  }

  // field types and members
  using _linear_velocity_type =
    float;
  _linear_velocity_type linear_velocity;

  // setters for named parameter idiom
  Type & set__linear_velocity(
    const float & _arg)
  {
    this->linear_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_ras_decision::srv::SetVelocity_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_ras_decision::srv::SetVelocity_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_ras_decision::srv::SetVelocity_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_ras_decision::srv::SetVelocity_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_ras_decision::srv::SetVelocity_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_ras_decision::srv::SetVelocity_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_ras_decision::srv::SetVelocity_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_ras_decision::srv::SetVelocity_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_ras_decision::srv::SetVelocity_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_ras_decision::srv::SetVelocity_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_ras_decision__srv__SetVelocity_Request
    std::shared_ptr<robot_ras_decision::srv::SetVelocity_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_ras_decision__srv__SetVelocity_Request
    std::shared_ptr<robot_ras_decision::srv::SetVelocity_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetVelocity_Request_ & other) const
  {
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetVelocity_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetVelocity_Request_

// alias to use template instance with default allocator
using SetVelocity_Request =
  robot_ras_decision::srv::SetVelocity_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_ras_decision


#ifndef _WIN32
# define DEPRECATED__robot_ras_decision__srv__SetVelocity_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_ras_decision__srv__SetVelocity_Response __declspec(deprecated)
#endif

namespace robot_ras_decision
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetVelocity_Response_
{
  using Type = SetVelocity_Response_<ContainerAllocator>;

  explicit SetVelocity_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sucesso = false;
    }
  }

  explicit SetVelocity_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sucesso = false;
    }
  }

  // field types and members
  using _sucesso_type =
    bool;
  _sucesso_type sucesso;

  // setters for named parameter idiom
  Type & set__sucesso(
    const bool & _arg)
  {
    this->sucesso = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_ras_decision::srv::SetVelocity_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_ras_decision::srv::SetVelocity_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_ras_decision::srv::SetVelocity_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_ras_decision::srv::SetVelocity_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_ras_decision::srv::SetVelocity_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_ras_decision::srv::SetVelocity_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_ras_decision::srv::SetVelocity_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_ras_decision::srv::SetVelocity_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_ras_decision::srv::SetVelocity_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_ras_decision::srv::SetVelocity_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_ras_decision__srv__SetVelocity_Response
    std::shared_ptr<robot_ras_decision::srv::SetVelocity_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_ras_decision__srv__SetVelocity_Response
    std::shared_ptr<robot_ras_decision::srv::SetVelocity_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetVelocity_Response_ & other) const
  {
    if (this->sucesso != other.sucesso) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetVelocity_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetVelocity_Response_

// alias to use template instance with default allocator
using SetVelocity_Response =
  robot_ras_decision::srv::SetVelocity_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_ras_decision

namespace robot_ras_decision
{

namespace srv
{

struct SetVelocity
{
  using Request = robot_ras_decision::srv::SetVelocity_Request;
  using Response = robot_ras_decision::srv::SetVelocity_Response;
};

}  // namespace srv

}  // namespace robot_ras_decision

#endif  // ROBOT_RAS_DECISION__SRV__DETAIL__SET_VELOCITY__STRUCT_HPP_
