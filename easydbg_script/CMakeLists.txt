# CMakeList.txt: easydbg_script 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#

# 添加Python3的开发套件
find_package(Python COMPONENTS Interpreter Development)
find_package(pybind11 CONFIG)
message(STATUS "Python3_EXECUTABLE: ${Python3_EXECUTABLE}")
message(STATUS "Python3_INCLUDE_DIRS: ${Python3_INCLUDE_DIRS}")
message(STATUS "Python3_LIBRARIES: ${Python3_LIBRARIES}")
message(STATUS "Python3_LIBRARY_DIRS: ${Python3_LIBRARY_DIRS}")
# 包含Python3的头文件
include_directories(${Python3_INCLUDE_DIRS})


# 添加子文件夹
add_subdirectory(extern/pybind11)
# 包含extern\pybind11\include
include_directories(extern/pybind11/include)
# 包含./includes
include_directories(includes)
# 将src下的.cpp\.c\.hpp文件检索出来
file(GLOB_RECURSE SRC_FILES "src/*.cpp" "src/*.c" "src/*.hpp")
# 将源代码添加到此项目的可执行文件。


# 包含x64dbg的lib文件
# add_library(x64dbg INTERFACE)
# target_include_directories(x64dbg INTERFACE "includes/pluginsdk")
# target_link_directories(x64dbg INTERFACE "includes/pluginsdk")

pybind11_add_module(easydbg_script ${SRC_FILES})

set_target_properties(easydbg_script PROPERTIES OUTPUT_NAME "easydbg")

# target_link_libraries(easydbg_script PRIVATE x64dbg)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET easydbg_script PROPERTY CXX_STANDARD 20)
endif()

if(MSVC)
    target_compile_options(easydbg_script PRIVATE /permissive-)
endif()