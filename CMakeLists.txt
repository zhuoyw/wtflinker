cmake_minimum_required(VERSION 3.5) 
set(CMAKE_CXX_STANDARD 11)

add_library(b SHARED b.cc)
add_library(a SHARED a.cc)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_executable(run main.cc)
target_link_libraries(run a b)
