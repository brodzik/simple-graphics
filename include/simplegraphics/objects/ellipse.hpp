#pragma once

#include "simplegraphics/objects/object.hpp"

namespace SimpleGraphics {

class Ellipse : public Object
{
public:
    explicit Ellipse(const Double &cx, const Double &cy, const Double &rx, const Double &ry)
        : Object("ellipse")
    {
        set_attribute(AttributeDouble("cx", cx));
        set_attribute(AttributeDouble("cy", cy));
        set_attribute(AttributeDouble("rx", rx));
        set_attribute(AttributeDouble("ry", ry));
    }
};

}  // namespace SimpleGraphics
