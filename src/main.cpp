#include <iostream>
#include <string>
#include "../include/vector3.h"

int main()
{
  Engine::Vector3 vect;
  std::string x = std::to_string(vect.getX());
  std::string y = std::to_string(vect.getY());
  std::string z = std::to_string(vect.getZ());

  std::string message = "x: " + x + ", y: " + y + ", z: " + z;

  std::cout << message << std::endl;

  return 0;
}