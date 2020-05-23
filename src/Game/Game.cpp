#include "../../include/Game/Game.h"

///
/// Getters
///

bool Game::isOver() const {
    return overFlag;
}

///
/// Setters
///

void Game::setOver(bool &overFlagRefIn) {
    overFlag = overFlagRefIn;
}

///
/// Constructors
///

Game::Game() : overFlag(false) {}

