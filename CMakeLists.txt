cmake_minimum_required(VERSION 3.15)
project(Tutorial)

set(CMAKE_CXX_STANDARD 14)

set(config1 1)
set(config2 2)

#配置头文件, 用头文件将cmake的配置参数传递到源代码中
#config.h.in中的参数经过cmake中的参数替换后,生成config.h头文件, 然后在源码中包含该头文件
configure_file(
        "${PROJECT_SOURCE_DIR}/config.h.in"
        "${PROJECT_BINARY_DIR}/config.h"
)

#添加头文件搜索目录
include_directories("${PROJECT_BINARY_DIR}")

option(MATHLIB "output message" OFF)
if(MATHLIB)
    include_directories("mathdir")  #添加库头文件所在目录
    add_subdirectory("mathdir") #生成库
    set(EXTRA_LIBS ${EXTRA_LIBS} add) #添加需要链接的库
endif(MATHLIB)


add_executable(tutorial main.cpp)
target_link_libraries(tutorial ${EXTRA_LIBS})











