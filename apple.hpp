
#pragma once

#include "point.hpp"

class Apple {
   Point _position;
public:
   Apple();
   Apple(const Point& position);
   Point GetPosition() const;
   
   // adaugam metoda SetPosition
   void SetPosition(const Point& position);
};

// implementarea metodei SetPosition
void Apple::SetPosition(const Point& position) {
   _position = position;
}
