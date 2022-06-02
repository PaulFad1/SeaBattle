#ifndef CELLSTATE_H
#define CELLSTATE_H

enum CellState
{
    FREE_STATE, // Обычная клетка
    SHOT_STATE, // Обстрелянная свободная клетка
    SHIP_STATE, // Клетка на которой корабль
    DAMAGED_STATE // Клетка с поврежденным кораблем
};

#endif // CELLSTATE_H
