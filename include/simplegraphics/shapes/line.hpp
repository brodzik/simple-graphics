#pragma once

#include "simplegraphics/shapes/drawable.hpp"

namespace SimpleGraphics {
namespace Shapes {

class Line : public Drawable
{
public:
    double x2;
    double y2;

    explicit Line(double x1, double y1, double x2, double y2)
        : Drawable(x1, y1)
        , x2(x2)
        , y2(y2)
    {
    }

    std::string to_svg()
    {
        return fmt::format("<line x1=\"{0}\" y1=\"{1}\" x2=\"{2}\" y2=\"{3}\" />", x, y, x2, y2);
    }
};

}  // namespace Shapes
}  // namespace SimpleGraphics
