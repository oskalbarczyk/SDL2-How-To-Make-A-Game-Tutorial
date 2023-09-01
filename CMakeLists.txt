cmake_minimum_required(VERSION 3.24)
project(SDL)

set(CMAKE_CXX_STANDARD 17)

set(MY_SOURCES main.cpp Game.cpp Game.h Game.cpp TextureManager.h TextureManager.cpp GameObject.cpp GameObject.h Map.cpp Map.h)

find_package(SDL2_image REQUIRED)
find_package(SDL2 REQUIRED COMPONENTS SDL2)
add_executable(my_game ${MY_SOURCES} Game.cpp)
target_link_libraries(my_game PRIVATE SDL2::SDL2)
target_link_libraries(my_game PRIVATE SDL2_image::SDL2_image)
