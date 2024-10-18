#include "pacman.hpp"

Pacman::Pacman() : _score(0) {/* ... */}
Pacman::Pacman(const Point &_position) : _position(_position), _score(0) {/* ... */}

void Pacman::Move(Direction direction) {
    switch (direction) {
        case Direction::Up:
            _position.y--;
            break;
        case Direction::Down:
            _position.y++;
            break;
        case Direction::Left:
            _position.x--;
            break;
        case Direction::Right:
            _position.x++;
            break;
    }
}

Point Pacman::GetPosition() const {
    return _position;
}

int Pacman::GetScore() const {
    return _score;
}

void Pacman::AddScore(int value) {
    _score += value;
}
