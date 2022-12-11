//using: https://github.com/baderouaich/BitmapPlusPlus

#include <iostream>
#include <cstdio>
#include <cmath>

#include "BitmapPlusPlus.hpp"

int main(int argc, char* argv[])
{
    if (argc <= 1) {
        printf("%s img.bmp\n", argv[0]);
        return EXIT_SUCCESS;
    }

    try
    {
        bmp::Bitmap image(argv[1]);

        double x_div = (image.Width() / 224.0);
        double y_div = (image.Height() / 64.0);

        for (std::int32_t y = 0; y < image.Height(); ++y) {
            for (std::int32_t x = 0; x < image.Width(); ++x) {
                bmp::Pixel color = image.Get(x, y);
                if (color.b == 0 || color.g == 0 || color.r == 0)
                {
                    //{ "flags": 4, "matrix": [0, 0] , "x": 7  , "y": 0 } ,
                    printf("{\"flags\": 4, \"matrix\":[0, 0], \"x\": %d, \"y\": %d },\n", (int)round(x / x_div), (int)round(y / y_div));
                }
            }
        }
    }
    catch (const bmp::Exception& e)
    {
        std::cerr << "[BMP ERROR]: " << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

