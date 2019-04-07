#pragma once

#include "simplegraphics/drawables/drawable.hpp"

namespace SimpleGraphics {
namespace Drawables {

class Line : public Drawable
{
public:
    double x2;
    double y2;

    explicit Line(double x1, double y1, double x2, double y2, Style style = Style())
        : Drawable(x1, y1, style)
        , x2(x2)
        , y2(y2)
    {
    }

    std::string toSVG()
    {
        return fmt::format("<line x1=\"{0}\" y1=\"{1}\" x2=\"{2}\" y2=\"{3}\" stroke=\"{4}\" stroke-opacity=\"{5}\" />", x, y, x2, y2, style.stroke, style.strokeOpacity);
    }
};

}  // namespace Drawables
}  // namespace SimpleGraphics
