cmake_minimum_required(VERSION 3.23)
project(practice)

set(CMAKE_CXX_STANDARD 14)

add_executable(practice main.cpp Swap.cpp Mystruct.cpp)

target_include_directories(practice PUBLIC ${CMAKE_SOURCE_DIR}/includes)
