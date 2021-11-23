#ifndef POINT2DO_H
#define POINT2DO_H

class point2d{
    public:
        point2d();
        point2d(const point2d &p);
        float getX() const {return this->x;}
        float getY() const {return this->y;}
        void setX(float nx);
        void setY(float ny);
        point2d operator =(const point2d &p);
        bool operator ==(const point2d &p);
    protected:
        float x;
        float y;
};

#endif
