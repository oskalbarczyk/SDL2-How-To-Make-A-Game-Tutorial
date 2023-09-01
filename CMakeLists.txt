cmake_minimum_required(VERSION 3.24)
project(SDL)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
        main.cpp
        Game.cpp
        TextureManager.cpp
        GameObject.cpp
        Map.cpp
        )

set(HEADERS
        Game.h
        TextureManager.h
        GameObject.h
        Map.h
        ECS/ECS.h
        ECS/SpriteComponent.h
        ECS/TransformComponent.h Vector2D.h Vector2D.cpp ECS/KeyboardController.h ECS/ColliderComponent.h Collision.h Collision.cpp ECS/TileComponent.h)




find_package(SDL2_image REQUIRED)
find_package(SDL2 REQUIRED COMPONENTS SDL2)
add_executable(my_game ${SOURCES} ${HEADERS})
target_link_libraries(my_game PRIVATE SDL2::SDL2)
target_link_libraries(my_game PRIVATE SDL2_image::SDL2_image)
