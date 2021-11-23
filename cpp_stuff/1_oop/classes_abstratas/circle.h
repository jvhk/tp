#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include "point2dp.h"

using namespace std;


class circle : public point2d{
    public:
        circle() : point2d() {this->radius = 0.0;}
        circle(float nx, float ny, float nr) : point2d(nx, ny){
            this->radius = nr;
        }
        virtual ~circle(){}
        void setRadius(float nr) {this->radius = nr;}
        float getRadius() const {return radius;}
        virtual float getArea() const {
            return 3.14159 * radius * radius;
        }    
        virtual void printShape() const{
            cout << "Circle ";
        }
        virtual void print() const {
            cout<<"Center :";
            point2d::print();
            cout << endl << "Radius: " << this->radius << endl;
        }
    private:
        float radius;
};

#endif
