#pragma once

#include "apple.hpp"
#include "direction.hpp"
#include "point.hpp"

class Snake {
   Point _segments[100];
   int _nr_segments;
public:
   Snake();
   Snake(const Point& _position);
   void Move(Direction direction);
   int GetSize() const;
   Point GetPosition() const;
   void Eat(const Apple& apple);
   
   // adaugam metoda IsCollision
   bool IsCollision() const;
};

// implementarea metodei IsCollision
bool Snake::IsCollision() const {
   for (int i = 1; i < _nr_segments; i++) {
      if (_segments[0].x == _segments[i].x && _segments[0].y == _segments[i].y) {
         return true;
      }
   }
   return false;
}
