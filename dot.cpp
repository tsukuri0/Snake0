#include "pellet.hpp"

Pellet::Pellet() : _position(0, 0) {}

Pellet::Pellet(const Point &position) : _position(position) {}

Pellet::Pellet(const Pellet &other) : _position(other.GetPosition()) {}

Point Pellet::GetPosition() const
{
    return _position;
}

Pellet Pellet::operator = (const Pellet& other){
    _position = other.GetPosition();
    return *this;
}
bool Pellet::operator == (const Pellet& other) const{
    return GetPosition() == other.GetPosition();
}

std::istream& operator >> (std::istream& in, Pellet& pellet){
    Point position;
    in >> position;
    pellet = Pellet(position);
    return in;
}

std::ostream& operator << (std::ostream& out, const Pellet& pellet){
    out << pellet.GetPosition();
    return out;
}
