#pragma once

#include "simplegraphics/shapes/drawable.hpp"

namespace SimpleGraphics {
namespace Shapes {

class Rectangle : public Drawable
{
public:
    double width;
    double height;

    explicit Rectangle(double x, double y, double width, double height)
        : Drawable(x, y)
        , width(width)
        , height(height)
    {
    }

    std::string to_svg()
    {
        return fmt::format("<rect x=\"{0}\" y=\"{1}\" width=\"{2}\" height=\"{3}\" />", x, y, width, height);
    }
};

}  // namespace Shapes
}  // namespace SimpleGraphics
