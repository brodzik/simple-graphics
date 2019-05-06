#pragma once

#include "simplegraphics/shapes/drawable.hpp"

namespace SimpleGraphics {
namespace Shapes {

class Circle : public Drawable
{
public:
    double radius;

    explicit Circle(double x, double y, double radius)
        : Drawable(x, y)
        , radius(radius)
    {
    }

    std::string to_svg()
    {
        return fmt::format("<circle cx=\"{0}\" cy=\"{1}\" r=\"{2}\" />", x, y, radius);
    }
};

}  // namespace Shapes
}  // namespace SimpleGraphics
