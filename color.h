#ifndef COLOR_H
#define COLOR_H

#include <iostream>
#include "vec3.h"

using color = vec3;

void write_color (std::ostream& out, const color& pixel_color){
    //Each Pixel has a value between 0 and 1 so scale by 255.9999 to get the true color
    out << (255.999 * pixel_color.x()) << ' ' << (255.999 * pixel_color.y()) << ' ' << (255.999 * pixel_color.z()) << '\n';
}


#endif