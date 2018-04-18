#ifndef GAME_H
#define GAME_H

#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>
#include <QImage>
#include "dialog.h"

class Game
{
public:
    Game();
    ~Game();
    void init();
private:
    Dialog * dialog;
    QGraphicsView * boardView;
    QImage * image;
};

#endif // GAME_H
