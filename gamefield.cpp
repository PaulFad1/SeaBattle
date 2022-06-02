#include "gamefield.h"
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
GameField::GameField()
{
    this->setSceneRect(0,0,400,400);
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cells.push_back(new Cell(j * 40, i * 40,40,40));
        }
    }
}


GameField::GameField(QVector<Cell*> c)
{
    cells = c;
}


void GameField::redraw()
{
    for(int i = 0; i < cells.size(); i++)
    {
        if(cells[i]->state == FREE_STATE)
            this->addRect(cells[i]->x,cells[i]->y,40,40,QPen(),QBrush(Qt::white));
        else if(cells[i]->state == SHOT_STATE)
            this->addRect(cells[i]->x,cells[i]->y,40,40,QPen(),QBrush(Qt::red));
    }

}


void GameField::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        float x = event->scenePos().x();
        float y = event->scenePos().y();
        for(int i = 0; i < cells.size(); i++)
        {
            if(cells[i]->in_cell(x,y))
            {
                qDebug() << "Выстрел по ячейке:" << i;
                cells[i]->shot_on();
            }
        }

        this->redraw();
    }
}


