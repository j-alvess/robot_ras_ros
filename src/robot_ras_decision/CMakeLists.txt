cmake_minimum_required(VERSION 3.5)
project(robot_ras_decision)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Movement.msg"
  "srv/SetVelocity.srv"
)

ament_export_dependencies(rosidl_default_runtime)

add_executable(MotorControllerNode src/motor_controller_node.cpp)
ament_target_dependencies(MotorControllerNode rclcpp std_msgs sensor_msgs)

rosidl_target_interfaces(MotorControllerNode
  ${PROJECT_NAME} "rosidl_typesupport_cpp")

add_executable(DecisionNode src/decision_node.cpp)
ament_target_dependencies(DecisionNode rclcpp std_msgs sensor_msgs)

rosidl_target_interfaces(DecisionNode
  ${PROJECT_NAME} "rosidl_typesupport_cpp")

install(TARGETS
  MotorControllerNode
  DecisionNode
  DESTINATION lib/${PROJECT_NAME})

ament_package()