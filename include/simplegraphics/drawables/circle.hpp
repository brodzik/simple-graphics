#pragma once

#include "simplegraphics/drawables/drawable.hpp"

namespace SimpleGraphics {
namespace Drawables {

class Circle : public Drawable
{
public:
    double radius;

    explicit Circle(double x, double y, double radius, Style style = Style())
        : Drawable(x, y, style)
        , radius(radius)
    {
    }

    std::string toSVG()
    {
        return fmt::format("<circle cx=\"{0}\" cy=\"{1}\" r=\"{2}\" fill=\"{3}\" fill-opacity=\"{4}\" stroke=\"{5}\" stroke-opacity=\"{6}\" />", x, y, radius, style.fill, style.fillOpacity, style.stroke, style.strokeOpacity);
    }
};

}  // namespace Drawables
}  // namespace SimpleGraphics
