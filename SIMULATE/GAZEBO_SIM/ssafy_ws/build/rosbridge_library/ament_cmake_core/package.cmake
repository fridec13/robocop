set(_AMENT_PACKAGE_NAME "rosbridge_library")
set(rosbridge_library_VERSION "2.0.0")
set(rosbridge_library_MAINTAINER "Jihoon Lee <jihoonlee.in@gmail.com>, Foxglove <ros-tooling@foxglove.dev>")
set(rosbridge_library_BUILD_DEPENDS "python3-pil" "python3-bson")
set(rosbridge_library_BUILDTOOL_DEPENDS "ament_cmake" "ament_cmake_ros")
set(rosbridge_library_BUILD_EXPORT_DEPENDS )
set(rosbridge_library_BUILDTOOL_EXPORT_DEPENDS )
set(rosbridge_library_EXEC_DEPENDS "rclpy" "python3-pil" "rosidl_default_runtime" "python3-bson")
set(rosbridge_library_TEST_DEPENDS "rosbridge_test_msgs" "action_msgs" "ament_cmake_pytest" "builtin_interfaces" "diagnostic_msgs" "example_interfaces" "control_msgs" "geometry_msgs" "nav_msgs" "sensor_msgs" "std_msgs" "std_srvs" "stereo_msgs" "tf2_msgs" "trajectory_msgs" "visualization_msgs")
set(rosbridge_library_GROUP_DEPENDS )
set(rosbridge_library_MEMBER_OF_GROUPS )
set(rosbridge_library_DEPRECATED "")
set(rosbridge_library_EXPORT_TAGS)
list(APPEND rosbridge_library_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
