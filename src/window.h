#ifndef WINDOW_H
#define WINDOW_H

#include <SDL2/SDL.h>
#include "object.h"

class Window {
  private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Event event;
    int sdlInit;
    const char* title;
    int width;
    int height;

  public:
    Window(const char* title, int width, int height);

    int run();
    void draw(Object obj);
    virtual void update();

    SDL_Event getEvent() const;
};

#endif