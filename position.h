#ifndef POSITION_H
#define POSITION_H


class Position
{
public:
    Position(int x, int y);
    virtual int getX(){
        return x;
    }
    virtual int getY(){
        return y;
    }
    virtual void setX(){
        this->x = x;
    }
    virtual void setY(){
        this->x = x;
    }
private:
    int x;
    int y;
};

#endif // POSITION_H
