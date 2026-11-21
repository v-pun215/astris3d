#include <iostream>
#include "color.hpp"
#include "vec3.hpp"

int main() {
    int img_width=256;
    int img_height=256;

    freopen("out.ppm", "w", stdout);

    cout << "P3\n" << img_width << ' ' << img_height << "\n255\n";

    for (int j=0;j<img_height;j++) {
        clog << "\rScanlines remaining: " << (img_height-j) << ' ' << flush;
        for (int i=0;i<img_width;i++) {
            auto pixel_color = color(double(i)/(img_width-1), double(j)/(img_height-1), 0);
            write_color(cout, pixel_color);
        }
    }

    clog << "\rDone.                     \n";
    
}