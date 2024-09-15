#pragma once

#include "point.hpp"
#include "direction.hpp"

class Ghost {
   Point _position;
   bool _isScared;
public:
   Ghost();
   Ghost(const Point& position, bool isScared = false);
   Point GetPosition() const;
   void Move(Direction direction);
   void SetScared(bool scared);
   bool IsScared() const;
};
