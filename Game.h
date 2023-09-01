#ifndef Game_h
#define Game_h

#include "SDL2/SDL.h"
#include "SDL_image.h"
#include <iostream>
#include <vector>

class ColliderComponent;

class Game {
public:
    Game();

    ~Game();

    void init(const char *title, int width, int height, bool fullscreen);

    void handleEvents();

    void update();

    bool running() { return isRunning; }

    void render();

    void clean();

    static SDL_Renderer* renderer;
    static SDL_Event event;
    static std::vector<ColliderComponent*> colliders;


private:
    int cnt = 0;
    bool isRunning = false;
    SDL_Window *window;
};


#endif /* Game_h */