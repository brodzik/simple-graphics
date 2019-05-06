#pragma once

#include <fstream>
#include <string>

#include "fmt/format.h"

namespace SimpleGraphics {
namespace Shapes {

class Drawable
{
public:
    double x;
    double y;

    explicit Drawable(double x, double y)
        : x(x)
        , y(y)
    {
    }

    virtual ~Drawable()
    {
    }

    virtual std::string to_svg() = 0;

    void save_to_file(const std::string &filename)
    {
        std::ofstream file(filename);

        if (file.is_open())
        {
            file << "<svg xmlns=\"http://www.w3.org/2000/svg\" version=\"1.1\">";

            file << to_svg();

            file << "</svg>";
        }
        else
        {
            throw;
        }
    }
};

}  // namespace Shapes
}  // namespace SimpleGraphics
