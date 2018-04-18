#include "game.h"
#include "dialog.h"
#include "player.h"
#include <QPen>
#include <QColor>
#include <QtCore>
#include <QGraphicsRectItem>

Game::Game(){
    dialog = new Dialog();
    dialog->setWindowTitle("Slide Puzzle Game");
    boardView = dialog->getBoardView();
    dialog->show();
}

Game::~Game(){
}

void Game::init(){
    QGraphicsScene * scene = new QGraphicsScene(dialog);
    scene->setSceneRect(0,0,600,600);
    boardView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    boardView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    boardView->setFixedSize(602,602);
    boardView->setScene(scene);

    Player * player = new Player();
    player->setPixmap(QPixmap(":/Icons/aMAOV71_700b.jpg"));
    QPen myPen(Qt::red, 3, Qt::DashDotLine, Qt::RoundCap, Qt::RoundJoin);

    scene->addItem(player);
    player->setFlag(QGraphicsItem::ItemIsMovable);




}
