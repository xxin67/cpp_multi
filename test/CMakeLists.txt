cmake_minimum_required (VERSION 3.30.0)#规定cmake的最低版本要求
project(text)
set(CMAKE_BUILD_TYPE "Debug") #打断点调试代码必设置，Cmake默认是Release会导致断点失效
set(CMAKE_CXX_COMPILER "g++")#设置c++编译器

include_directories(${PROJECT_SOURCE_DIR}/include)#添加头文件的搜索路径
aux_source_directory(./src SrcFiles)#将源文件列表写在变量SrcFiles中
aux_source_directory(${PROJECT_SOURCE_DIR} SrcFiles)
set(EXECUTABLE_OUTPUT_PATH  ${PROJECT_SOURCE_DIR}/bin)#设置可执行文件输出路径
add_executable(main ${SrcFiles})#设置可执行文件的名称，make之后bin目录下出现test.exe
