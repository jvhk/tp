#include "poit2d.h"

point2d::point2d(){
    this->x = 0.0;
    this->y = 0.0;
}

point2d::point2d(float nx, float ny){
    this->x = nx;
    this->y = ny;
}

point2d::point2d(const point2d &p){
    this->x = p.getX();
    this->y = p.getY();
}

void point2d::setX(float nx){
    this->x = nx;
}

void point2d::setY(float ny){
    this->y = ny;
}


