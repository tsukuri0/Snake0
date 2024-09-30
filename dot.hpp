#pragma once

#include "point.hpp"

class Dot {
    Point _position;
public:
    Dot();
    Dot(const Point &position);
    Point GetPosition() const;
    bool IsCollected() const;
    void Collect();
private:
    bool _collected;
};
