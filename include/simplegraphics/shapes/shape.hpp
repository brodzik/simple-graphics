#pragma once

#include <string>

namespace SimpleGraphics {
namespace Shapes {

class Shape
{
public:
    int x, y;

    explicit Shape(int x, int y)
        : x(x)
        , y(y)
    {
    }

    virtual ~Shape()
    {
    }

    virtual std::string toSVG() = 0;
};

}  // namespace Shapes
}  // namespace SimpleGraphics
