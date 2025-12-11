# 1. 设置要求的 CMake 版本
cmake_minimum_required(VERSION 3.10)

# 2. 定义项目名称
project(CircleExample CXX)

# 3. 指定编译的可执行文件和它依赖的源文件
# 语法: add_executable(<可执行文件名> <源文件列表...>)
# 这样 CMake 就知道需要编译 main.cpp 和 circle.cpp，并链接在一起。
add_executable(circle_app 
    main.cpp 
    circle.cpp
)

# 可选：设置 C++ 标准，以确保兼容性
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)