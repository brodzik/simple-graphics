#pragma once

#include "simplegraphics/objects/object.hpp"

namespace SimpleGraphics {

class Circle : public Object
{
public:
    explicit Circle(const Double &cx, const Double &cy, const Double &r)
        : Object("circle")
    {
        set_attribute(AttributeDouble("cx", cx));
        set_attribute(AttributeDouble("cy", cy));
        set_attribute(AttributeDouble("r", r));
    }
};

}  // namespace SimpleGraphics
