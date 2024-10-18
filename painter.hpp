#pragma once

#include "painter.hpp"

class Painter: public Painter {
public:
   virtual void DrawImage(Point topLeft, Point bottomRight, char** image);
   virtual void WriteText(Point position, char* text);
};
