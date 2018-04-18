#ifndef BOARD_H
#define BOARD_H

#include <QImage>
#include <QList>
#include "swapable.h"
#include "puzzle.h"
#include "configuration.h"

class Board
{
public:
    Board(Configuration configuration, QImage image);
    bool swapPossibleUp();
    bool swapPossibleDown();
    bool swapPossibleRight();
    bool swapPossibleLeft();

    void swap(Swapable source, Swapable destination);

    bool checkCompletion();
private:
    bool completionFlag;
    QList<Puzzle*> puzzleList();

    int elementHeight;
    int elementWidth;
};

#endif // BOARD_H
