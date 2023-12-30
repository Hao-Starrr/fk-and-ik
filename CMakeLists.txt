cmake_minimum_required(VERSION 3.10)
project(RobotArm)

set(CMAKE_CXX_STANDARD 17)

# 设置Eigen库的路径
include_directories("E:/lib/eigen-3.4.0")
# include_directories("E:/lib/")

add_executable(RobotArm main.cpp)
