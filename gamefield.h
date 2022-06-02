#ifndef GAMEFIELD_H
#define GAMEFIELD_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QVector>
#include <QPaintEvent>
#include <QPainter>
#include "cell.h"
class GameField:public QGraphicsScene
{

    QVector<Cell*> cells;
    //QVector<Ship*> ships;
public:
    GameField();
    GameField(QVector<Cell*>);
    void redraw();
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;

};

#endif // GAMEFIELD_H
