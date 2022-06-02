#include "seabattle.h"
#include "ui_seabattle.h"
#include <QDebug>
SeaBattle::SeaBattle(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SeaBattle)
{
    ui->setupUi(this);
    game = new Game();

    ui->graphicsView->setScene(game->gameField);

   // ui->label->setText();
}

SeaBattle::~SeaBattle()
{
    delete ui;
}

