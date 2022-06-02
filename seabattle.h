#ifndef SEABATTLE_H
#define SEABATTLE_H

#include <QMainWindow>
#include <game.h>
QT_BEGIN_NAMESPACE
namespace Ui { class SeaBattle; }
QT_END_NAMESPACE

class SeaBattle : public QMainWindow
{
    Q_OBJECT

public:
    SeaBattle(QWidget *parent = nullptr);
    ~SeaBattle();


private:
    Ui::SeaBattle *ui;
    Game *game;

};
#endif // SEABATTLE_H
