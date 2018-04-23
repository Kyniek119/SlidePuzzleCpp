#include "player.h"
#include <QKeyEvent>
#include <QDebug>

Player::Player(){
    setFlag(QGraphicsItem::ItemIsFocusable);
}

/*void Player::keyPressEvent(QKeyEvent * event){
    if(event->key() == Qt::Key_Up){
        if(swapPossibleUp){
            swap(getUpElement());
        }
    }else if(event->key() == Qt::Key_Down){
        if(swapPossibleDown){
            swap(getDownElement());
        }
    }else if(event->key() == Qt::Key_Left){
        if(swapPossibleLeft){
            swap(getDownElement());
        }
    }else if(event->key() == Qt::Key_Right){
        if(swapPossible){
            swap(getDownElement());
        }
    }
    qDebug() << "Key pressed. :)";
}*/
