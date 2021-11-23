#ifndef POINT3D_H
#define POINT3D_H

#include "poit2d.h"

class point3d : public point2d{         //herança ":"
    public:
        point3d();
        point3d(float nx, float ny, float nz);
        point3d(const point3d &p);
        virtual ~point3d(){}
        float getZ() const {return this->z;}
        void setZ(float nz);
    protected:
        float z;
};

#endif
