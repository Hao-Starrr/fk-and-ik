# fk and ik

Eigen 是 cpp 线性代数的库，KDL（Kinematics and Dynamics Library）是运动学的库。

cpp 里还有很多有意思的库：
功能包 Boost（算是 STL 的补充包）
数据解析库 yaml-cpp  
数据解析库 rapidjson  
数据解析库 jsoncpp  
数据序列化库 Protobuf  
日志库 easylogging++ 和 glog  
计算集合 CGAL  
图表 matplotlib-cpp（调用 python 画）

对于 Eigen，由于它是一个 header-only 库，你只需要在 CMakeLists.txt 中添加包含目录。例如：  
include_directories("path/to/Eigen")

对于 KDL，这个过程可能更复杂，因为它不是一个 header-only 库。你需要使用 find_package()来找到 KDL，并链接到你的项目。例如：
find_package(orocos_kdl)  
include_directories(${orocos_kdl_INCLUDE_DIRS})  
target_link_libraries(your_project_name ${orocos_kdl_LIBRARIES})

什么是 Header-only 库？

- 只包含头文件：Header-only 库仅由头文件（.h 或 .hpp 文件）组成，不包含源文件（.cpp 文件）。这意味着库的全部实现都在头文件中。
- 无需编译：由于没有源文件，这些库在使用前不需要编译。当你包含这些头文件时，库中的代码直接包含在你的程序中。预处理的时候代码会复制进我的项目。
- 模板和内联函数：Header-only 库通常大量使用模板和内联函数。模板类和函数在使用时进行实例化，而内联函数在每个调用点展开。
- 所以方便用！

但 KDL 不是！它是需要先编译的。变成 lib 或者 a 文件才能动态链接进去。所以要先 cmake build KDL。  
因为一些版本问题太麻烦，也没法放进 arduino 项目里，放弃。
