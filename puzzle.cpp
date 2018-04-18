#include "puzzle.h"
#include "position.h"

Puzzle::Puzzle(int id, Position * position){
    this->id = id;
    this->setPosition(position);
    this->name = "Wow to dziala!!!";
}

int Puzzle::getID(){
    return this->id;
}

Position* Puzzle::getPosition(){
    return position;
}

QString Puzzle::getName(){
    return this->name;
}
