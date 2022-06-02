#include "cell.h"

Cell::Cell()
{

}

Cell::Cell(float x1, float y1, float h1, float w1)
{
    x = x1;
    y = y1;
    h = h1;
    w = w1;
    state = FREE_STATE;
}


void Cell::shot_on()
{
    if(this->state == FREE_STATE)
        this->state = SHOT_STATE;
    else if(this->state == SHIP_STATE)
        this->state = DAMAGED_STATE;
}


bool Cell::in_cell(float x, float y)
{
    if(x >= this->x && x <= this->x + this->w && y >= this->y && y <= this->y + this->h)
    {
        return true;
    }
    else
        return false;
}
