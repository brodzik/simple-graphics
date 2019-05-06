#pragma once

#include "simplegraphics/shapes/drawable.hpp"

namespace SimpleGraphics {
namespace Shapes {

class Ellipse : public Drawable
{
public:
    double radius_x;
    double radius_y;

    explicit Ellipse(double x, double y, double radius_x, double radius_y)
        : Drawable(x, y)
        , radius_x(radius_x)
        , radius_y(radius_y)
    {
    }

    std::string to_svg()
    {
        return fmt::format("<ellipse cx=\"{0}\" cy=\"{1}\" rx=\"{2}\" ry=\"{3}\" />", x, y, radius_x, radius_y);
    }
};

}  // namespace Shapes
}  // namespace SimpleGraphics
