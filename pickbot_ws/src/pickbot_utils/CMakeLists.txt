cmake_minimum_required(VERSION 3.8)
project(pickbot_utils)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(pickbot_msgs REQUIRED)
find_package(tf2 REQUIRED)

add_executable(angle_conversion src/angle_conversion.cpp)
ament_target_dependencies(angle_conversion rclcpp pickbot_msgs tf2)

install(TARGETS
  angle_conversion
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
