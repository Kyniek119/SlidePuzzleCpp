#ifndef SWAPABLE_H
#define SWAPABLE_H

#include <QDebug>
#include "position.h"

class Swapable{
public:
    virtual void swap(Swapable s){
        Position * tmp = this->getPosition();
        this->setPosition(s.getPosition());
        s.setPosition(tmp);
    }
    virtual Position * getPosition(){
        return position;
    }
protected:
    Position * position;
    virtual void setPosition(Position * position){
        this->position = position;
    }
};

#endif // SWAPABLE_H
