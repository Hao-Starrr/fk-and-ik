cmake_minimum_required(VERSION 3.10)
project(RobotArm)

set(CMAKE_CXX_STANDARD 17)

# 设置Eigen库的路径
include_directories("E:/lib/eigen-3.4.0")
# 设置orocos_kdl库的路径
find_package(orocos_kdl)
include_directories(${orocos_kdl_INCLUDE_DIRS})
target_link_libraries(your_project_name ${orocos_kdl_LIBRARIES})

add_executable(RobotArm main.cpp)
