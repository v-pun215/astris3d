#ifndef COLOR_HPP
#define COLOR_HPP
#include "vec3.hpp"
#include <iostream>

using namespace std;

using color = vec3;

void write_color(ostream& out, const color& pxl_color) {
    auto r=pxl_color.x();
    auto g=pxl_color.y();
    auto b=pxl_color.z();

    // translate 0-1 range components to byte range: 0-255
    r=int(255.99*r);
    g=int(255.99*g);
    b=int(255.99*b);

    out << r << ' ' << g<< ' '<<b <<'\n';
}

#endif