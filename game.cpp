#include "game.h"

Game::Game()
{
    gameField = new GameField();
    gameField->redraw();
    gameState = Arrangement_State;
}

