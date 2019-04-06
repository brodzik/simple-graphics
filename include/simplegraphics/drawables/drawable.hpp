#pragma once

#include <fstream>
#include <string>

#include "fmt/format.h"

namespace SimpleGraphics {
namespace Drawables {

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

    virtual std::string toSVG() = 0;

    void saveAsSVG(const std::string &filename)
    {
        std::ofstream file(filename);

        if (file.is_open())
        {
            file << "<svg xmlns=\"http://www.w3.org/2000/svg\" version=\"1.1\">";

            file << toSVG();

            file << "</svg>";
        }
        else
        {
            throw;
        }
    }
};

}  // namespace Drawables
}  // namespace SimpleGraphics
