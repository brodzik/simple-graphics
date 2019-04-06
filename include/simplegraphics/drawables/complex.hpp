#pragma once

#include <memory>
#include <utility>
#include <vector>

#include "simplegraphics/drawables/drawable.hpp"

namespace SimpleGraphics {
namespace Drawables {

class Complex : public Drawable
{
public:
    explicit Complex(double x, double y)
        : Drawable(x, y)
    {
    }

    template <class T>
    void add(const T &obj)
    {
        drawables.push_back(std::make_shared<T>(obj));
    }

    std::string toSVG()
    {
        std::string s = fmt::format("<svg x=\"{0}\" y=\"{1}\">", x, y);

        for (auto a : drawables)
        {
            s += a->toSVG();
        }

        s += "</svg>";

        return s;
    }

private:
    std::vector<std::shared_ptr<Drawable>> drawables;
};

}  // namespace Drawables
}  // namespace SimpleGraphics
