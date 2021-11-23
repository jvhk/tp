#include "point3d.h"

point3d::point3d() : point2d(){ //default constructor
    this->z = 0.0;
}

point3d::point3d(float nx,float ny,float nz) : point2d(nx,ny) { //constructor with params
    this->z = nz;
}

point3d::point3d(const point3d &p){ //copy constructor
    this->setX(p.getX());
    this->setY(p.getY());
    this->setZ(p.getZ());
}

//setter
void point3d::setZ(float nz){
    this->z = nz;
}






