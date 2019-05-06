#pragma once

#include "simplegraphics/shapes/drawable.hpp"

namespace SimpleGraphics {
namespace Shapes {

class Polygon : public Drawable
{
public:
    explicit Polygon(const std::vector<std::pair<double, double>> &points)
        : Drawable(0, 0)
        , points(points)
    {
    }

    std::string to_svg()
    {
        std::string p = "";

        for (auto a : points)
        {
            p += fmt::format("{0},{1} ", a.first, a.second);
        }

        return fmt::format("<polygon points=\"{0}\" fill=\"{1}\" />", p);
    }

private:
    std::vector<std::pair<double, double>> points;
};

}  // namespace Shapes
}  // namespace SimpleGraphics
