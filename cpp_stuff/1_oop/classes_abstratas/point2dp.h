#ifndef POINT2DP_H
#define POINT2DP_H
#include <iostream>
#include "shape.h"

using namespace std;

class point2d : public shape{
    public:
        point2d() : shape(){
            this->x = 0.0;
            this->y = 0.0;
        }

        point2d(float nx, float ny) : shape(){
            this->x = nx;
            this->y = ny;
        }

        point2d(const point2d &p){
            this->x = p.getX();
            this->y = p.getY();
        }

        virtual ~point2d(){}
        float getX() const {return this->x;}
        float getY() const {return this->y;}
        void setX(float nx) {this->x = nx;}
        void setY(float ny) {this->y = ny;}
        virtual void printShapeName() const{
            cout<< " (" << this->x << ", " << this->y << ") ";
        }
    protected:
        float x;
        float y;
};

#endif
