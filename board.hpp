#pragma once

#include "point.hpp"

class Board {
   int _width;
   int _height;
   char _layout[100][100];  // Simplified layout of walls, dots, etc.
public:
   Board(int width = 20, int height = 20);
   void LoadLayout();
   bool IsWall(const Point& position) const;
   void EatDot(const Point& position);
   int GetWidth() const;
   int GetHeight() const;
};
