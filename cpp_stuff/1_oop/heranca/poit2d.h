#ifndef POINT2D_H
#define POINT2D_H

class point2d{
    public:
        point2d(); //primeiro construtor default
        point2d(float nx, float ny); //segundo construtor com atributos
        point2d(const point2d &p); //construtor de cópia
        virtual ~point2d() {} //destrutor
        float getX() const { return this->x; }
        float getY() const { return this->y; }
        void setX(float nx);
        void setY(float ny);
    protected:
        float x;
        float y;
    };

#endif
