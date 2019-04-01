#pragma once

#include "fmt/format.h"
#include "simplegraphics/shapes/shape.hpp"

namespace SimpleGraphics {
namespace Shapes {

class Rectangle : public Shape
{
public:
    int w, h;

    explicit Rectangle(int x, int y, int w, int h)
        : Shape(x, y)
        , w(w)
        , h(h)
    {
    }

    virtual std::string toSVG()
    {
        return fmt::format("<rect x=\"{0}\" y=\"{1}\" width=\"{2}\" height=\"{3}\" />", x, y, w, h);
    }
};

}  // namespace Shapes
}  // namespace SimpleGraphics
