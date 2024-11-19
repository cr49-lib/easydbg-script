# CMakeList.txt: easydbg_script 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#

# 添加Python3的开发套件
find_package(Python3 COMPONENTS Development)



# 添加子文件夹
add_subdirectory(extern/pybind11)
# 包含extern\pybind11\include
include_directories(extern/pybind11/include)
# 包含./includes
include_directories(includes)
# 将src下的.cpp\.c\.hpp文件检索出来
file(GLOB_RECURSE SRC_FILES "src/*.cpp" "src/*.c" "src/*.hpp")
# 将源代码添加到此项目的可执行文件。
pybind11_add_module(easydbg_script ${SRC_FILES})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET easydbg_script PROPERTY CXX_STANDARD 20)
endif()

if(MSVC)
    target_compile_options(easydbg_script PRIVATE /permissive-)
endif()