#include "game_engine.hpp"
#include <iostream>

GameEngine::GameEngine() : _board(20, 20), _pacman(Point{10, 10}) {/* ... */}

void GameEngine::Init() {
    // Init dots
    for (int i = 0; i < _board.GetWidth(); i++) {
        for (int j = 0; j < _board.GetHeight(); j++) {
            if ((i + j) % 2 == 0) {  // Plasăm punctele la anumite intervale
                _dots.push_back(Dot(Point{i, j}));
            }
        }
    }
}

void GameEngine::Run() {
    char input;
    while (true) {
        std::cin >> input;

        Direction direction;
        switch (input) {
            case 'w': direction = Direction::Up; break;
            case 's': direction = Direction::Down; break;
            case 'a': direction = Direction::Left; break;
            case 'd': direction = Direction::Right; break;
            default: continue;
        }

        _pacman.Move(direction);
        CheckCollisions();
        
        // Output current state
        std::cout << "Pacman is at (" << _pacman.GetPosition().x << ", " << _pacman.GetPosition().y << ")\n";
        std::cout << "Score: " << _pacman.GetScore() << "\n";
    }
}

void GameEngine::CheckCollisions() {
    for (auto& dot : _dots) {
        if (!dot.IsCollected() && _pacman.GetPosition().x == dot.GetPosition().x && _pacman.GetPosition().y == dot.GetPosition().y) {
            dot.Collect();
            _pacman.AddScore(10);
        }
    }
}
