#pragma once

#include <iostream>

class Board {
   int _width;
   int _height;
public:
   Board(int width = 28, int height = 31); // dimensiuni standard Pac-Man
   Board(const Board& other);
   int GetWidth() const;
   int GetHeight() const;

   Board operator = (const Board& other);
   bool operator == (const Board& other) const;
};

std::istream& operator >> (std::istream& in, Board& board);
std::ostream& operator << (std::ostream& out, const Board& board);
