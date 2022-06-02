#ifndef GAME_H
#define GAME_H
#include "gamefield.h"


enum GameState
{
    Arrangement_State,
    Battle_State
};

class Game : QObject
{
public:
    Game();
    GameField *gameField;
    GameState gameState;

};

#endif // GAME_H
