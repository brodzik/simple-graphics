#pragma once

#include "simplegraphics/drawables/drawable.hpp"

namespace SimpleGraphics {
namespace Drawables {

class Ellipse : public Drawable
{
public:
    double radiusX;
    double radiusY;

    explicit Ellipse(double x, double y, double radiusX, double radiusY, Style style = Style())
        : Drawable(x, y, style)
        , radiusX(radiusX)
        , radiusY(radiusY)
    {
    }

    std::string toSVG()
    {
        return fmt::format("<ellipse cx=\"{0}\" cy=\"{1}\" rx=\"{2}\" ry=\"{3}\" fill=\"{4}\" fill-opacity=\"{5}\" stroke=\"{6}\" stroke-opacity=\"{7}\" />", x, y, radiusX, radiusY, style.fill, style.fillOpacity, style.stroke, style.strokeOpacity);
    }
};

}  // namespace Drawables
}  // namespace SimpleGraphics
