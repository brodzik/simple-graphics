#pragma once

#include "simplegraphics/drawables/drawable.hpp"

namespace SimpleGraphics {
namespace Drawables {

class Polyline : public Drawable
{
public:
    explicit Polyline(const std::vector<std::pair<double, double>> &points, Style style = Style())
        : Drawable(0, 0, style)
        , points(points)
    {
    }

    std::string toSVG()
    {
        std::string p = "";

        for (auto a : points)
        {
            p += fmt::format("{0},{1} ", a.first, a.second);
        }

        return fmt::format("<polyline points=\"{0}\" fill=\"none\" stroke=\"{1}\" stroke-opacity=\"{2}\" />", p, style.stroke, style.strokeOpacity);
    }

private:
    std::vector<std::pair<double, double>> points;
};

}  // namespace Drawables
}  // namespace SimpleGraphics
