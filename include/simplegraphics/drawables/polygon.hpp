#pragma once

#include "simplegraphics/drawables/drawable.hpp"

namespace SimpleGraphics {
namespace Drawables {

class Polygon : public Drawable
{
public:
    explicit Polygon(const std::vector<std::pair<double, double>> &points, Style style = Style())
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

        return fmt::format("<polygon points=\"{0}\" fill=\"{1}\" fill-opacity=\"{2}\" stroke=\"{3}\" stroke-opacity=\"{4}\" />", p, style.fill, style.fillOpacity, style.stroke, style.strokeOpacity);
    }

private:
    std::vector<std::pair<double, double>> points;
};

}  // namespace Drawables
}  // namespace SimpleGraphics
