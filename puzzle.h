#ifndef PUZZLE_H
#define PUZZLE_H

#include "position.h"
#include <QString>
#include <QGraphicsPixmapItem>
#include "swapable.h"

class Puzzle: public Swapable, public QGraphicsPixmapItem
{
public:
    Puzzle(int id, Position * position);
    int getID();
    Position * getPosition();
    QString getName();
    void Swap(Swapable s);
private:
    int id;
    QString name;
};

#endif // PUZZLE_H
