#include "ghost.hpp"

Ghost::Ghost() : _position({0, 0}), _isScared(false) {}

Ghost::Ghost(const Point& position, bool isScared) : _position(position), _isScared(isScared) {}

Point Ghost::GetPosition() const {
    return _position;
}

void Ghost::Move(Direction direction) {
    switch (direction) {
        case Direction::Top:
            _position.y -= 1;
            break;
        case Direction::Bottom:
            _position.y += 1;
            break;
        case Direction::Left:
            _position.x -= 1;
            break;
        case Direction::Right:
            _position.x += 1;
            break;
    }
}

void Ghost::SetScared(bool scared) {
    _isScared = scared;
}

bool Ghost::IsScared() const {
    return _isScared;
}
