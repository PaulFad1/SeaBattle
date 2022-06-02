#ifndef CELL_H
#define CELL_H

#include "cellstate.h"
class Cell
{

public:
    float x;
    float y;
    float h;
    float w;
    CellState state;
    Cell();
    Cell(float, float, float, float);
    void shot_on();
    bool in_cell(float,float);
};

#endif // CELL_H
