#include "window.h"
#include "object.h"
#include <iostream>

class EmberEngine : public Window {
  private:
    Object obj;
  
  public:
    EmberEngine(const char* title, int width, int height) 
    : Window(title, width, height) {}

    void start() override {
      this->obj = Object(20, 50, 50, 50, 0);
    }
    
    void eventListener(SDL_Event event) override {
      if (event.type == SDL_KEYDOWN) {
        switch (event.key.keysym.sym) {
          case SDLK_UP:
            this->obj.setY(this->obj.getY() - 1);
            break;
          case SDLK_DOWN:
            this->obj.setY(this->obj.getY() + 1);
            break;
          case SDLK_LEFT:
            this->obj.setX(this->obj.getX() - 1);
            break;
          case SDLK_RIGHT:
            this->obj.setX(this->obj.getX() + 1);
            break;
          case SDLK_ESCAPE:
            // quit = true;
            break;
          default:
            break;
        }
      }
    }

    void update() override {
      
      this->draw(obj);
    }
};

int main() {
  EmberEngine engine("EmberEngine", 640, 380);
  engine.run();
  return 0;
}