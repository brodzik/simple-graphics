#pragma once

#include <memory>
#include <utility>
#include <vector>

#include "simplegraphics/shapes/drawable.hpp"

namespace SimpleGraphics {
namespace Shapes {

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
        objects.push_back(std::make_shared<T>(obj));
    }

    std::string to_svg()
    {
        std::string s = fmt::format("<svg x=\"{0}\" y=\"{1}\">", x, y);

        for (auto a : objects)
        {
            s += a->to_svg();
        }

        s += "</svg>";

        return s;
    }

private:
    std::vector<std::shared_ptr<Drawable>> objects;
};

}  // namespace Shapes
}  // namespace SimpleGraphics
