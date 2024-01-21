#ifndef RAY_H
#define RAY_H

#include "vec3.h"

class ray{

    private:
        // Ray as a function: P(t) = A + tB  | A is the origin of ray and B is direction of ray 
        point3 orig;
        vec3 dir;

    public:
        ray(const point3& origin, const vec3& direction) : orig(origin), dir(direction) {}
        const point3& origin() const {return orig;}
        const vec3& direction() const {return dir;}

        point3 at(double t) const {
            return orig + t*dir;
        }
};

#endif