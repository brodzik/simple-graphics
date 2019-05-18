#pragma once

#include "simplegraphics/objects/object.hpp"

namespace SimpleGraphics {

class Rectangle : public Object
{
public:
    explicit Rectangle(const Double &x, const Double &y, const Double &width, const Double &height)
        : Object("rect")
    {
        set_attribute(AttributeDouble("x", x));
        set_attribute(AttributeDouble("y", y));
        set_attribute(AttributeDouble("width", width));
        set_attribute(AttributeDouble("height", height));
    }
};

}  // namespace SimpleGraphics
