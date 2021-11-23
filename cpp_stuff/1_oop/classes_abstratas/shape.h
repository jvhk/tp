#ifndef SHAPE_H
#define SHAPE_H

class shape{
    public:
        shape();
        virtual ~shape(){}
        virtual float getArea() const {return 0.0;}
        virtual float getVolume() const {return 0.0;}
    
        //pure virtual methods
        virtual void printShapeName() const = 0;
        virtual void print() const = 0;
};

#endif
