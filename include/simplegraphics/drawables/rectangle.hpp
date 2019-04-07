#pragma once

#include "simplegraphics/drawables/drawable.hpp"

namespace SimpleGraphics {
namespace Drawables {

class Rectangle : public Drawable
{
public:
    double width;
    double height;

    explicit Rectangle(double x, double y, double width, double height, Style style = Style())
        : Drawable(x, y, style)
        , width(width)
        , height(height)
    {
    }

    std::string toSVG()
    {
        return fmt::format("<rect x=\"{0}\" y=\"{1}\" width=\"{2}\" height=\"{3}\" fill=\"{4}\" fill-opacity=\"{5}\" stroke=\"{6}\" stroke-opacity=\"{7}\" />", x, y, width, height, style.fill, style.fillOpacity, style.stroke, style.strokeOpacity);
    }
};

}  // namespace Drawables
}  // namespace SimpleGraphics
