cmake_minimum_required(VERSION 3.24)
project(SDL)

set(CMAKE_CXX_STANDARD 17)

set(MY_SOURCES main.cpp)

find_package(SDL2 REQUIRED COMPONENTS SDL2)
add_executable(my_game ${MY_SOURCES})
target_link_libraries(my_game PRIVATE SDL2::SDL2)
