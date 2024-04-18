cmake_minimum_required(VERSION 3.28.1)
add_definitions(-std=c++11)

# set(CXX_FLAGS "-Wall")
# set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

# set(CMAKE_BUILD_TYPE Debug)
project(bst_smallest_string VERSION 0.1.0 LANGUAGES C CXX)

set(MYPRJ "bst_smallest_string")

set(PRJ_SRC 
    src/BinaryTree.cpp
    src/test.cpp)

add_executable(${MYPRJ} ${PRJ_SRC})
target_include_directories(${MYPRJ} PUBLIC ${PROJECT_SOURCE_DIR}/inc)
set_target_properties(${MYPRJ} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})