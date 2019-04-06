#pragma once

#include "simplegraphics/drawables/drawable.hpp"

namespace SimpleGraphics {
namespace Drawables {

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

    std::string toSVG()
    {
        return fmt::format("<rect x=\"{0}\" y=\"{1}\" width=\"{2}\" height=\"{3}\" />", x, y, width, height);
    }
};

}  // namespace Drawables
}  // namespace SimpleGraphics
