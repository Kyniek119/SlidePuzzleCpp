#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsPixmapItem>
#include "swapable.h"

class Player: public Swapable, public QGraphicsPixmapItem{
public:
    Player();
    void keyPressEvent(QKeyEvent * event);
};

#endif // PLAYER_H
