cmake_minimum_required(VERSION 3.10)
project(RobotArm)

set(CMAKE_CXX_STANDARD 17)

# 设置Eigen库的路径
include_directories("path/to/eigen")

add_executable(RobotArm main.cpp)
