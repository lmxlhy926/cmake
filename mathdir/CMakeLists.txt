
message(STATUS "HLL")

#生成可执行程序
add_executable(MakeTable table.cpp)

#运行生成的程序
add_custom_command(
        OUTPUT ${PROJECT_BINARY_DIR}/table.h
        COMMAND MakeTable ${PROJECT_BINARY_DIR}/table.h
        DEPENDS MakeTable
)

#添加头文件搜索目录
include_directories(${PROJECT_BINARY_DIR})

#生成库
add_library(add add.cpp ${PROJECT_BINARY_DIR}/table.h)

install(FILES "${PROJECT_BINARY_DIR}/table.h" DESTINATION ${PROJECT_SOURCE_DIR})