#ifndef POINT2DF_H
#define POINT2DF_H

#include <iostream>

using namespace std;

class point2d {
    friend ostream &operator << (ostream &output, const point2d &p);

    public:
    point2d(){
        this->x = 0.0;
        this->y = 0.0;
    }
    point2d(float nx, float ny){
        this->x = nx;
        this->y = ny;
    }
    virtual ~point2d(){}
    float getX() const {return this->x;}
    float getY() const {return this->y;}
    void setX(float nx) {this->x = nx;}
    void setY(float ny) {this->y = ny;}
    
    protected:
        float x;
        float y;
};

ostream &operator << (ostream &output, const point2d &p){
    output<< "(" << p.getX() << ", " << p.getY() << ")";
    return  output;
}

#endif
