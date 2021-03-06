#pragma once

#include "simplegraphics/objects/object.hpp"

namespace SimpleGraphics {

class Circle : public Object
{
public:
    explicit Circle(const Double &cx, const Double &cy, const Double &r, const std::string &fill, const std::string &stroke)
        : Circle(cx, cy, r, fill)
    {
        set_attribute(AttributeString("stroke", stroke));
    }

    explicit Circle(const Double &cx, const Double &cy, const Double &r, const std::string &fill)
        : Circle(cx, cy, r)
    {
        set_attribute(AttributeString("fill", fill));
    }

    explicit Circle(const Double &cx, const Double &cy, const Double &r)
        : Object("circle")
    {
        set_attribute(AttributeDouble("cx", cx));
        set_attribute(AttributeDouble("cy", cy));
        set_attribute(AttributeDouble("r", r));
    }

    explicit Circle(const Point &p, const Double &r, const std::string &fill, const std::string &stroke)
        : Circle(p.x, p.y, r, fill, stroke)
    {
    }

    explicit Circle(const Point &p, const Double &r, const std::string &fill)
        : Circle(p.x, p.y, r, fill)
    {
    }

    explicit Circle(const Point &p, const Double &r)
        : Circle(p.x, p.y, r)
    {
    }
};

}  // namespace SimpleGraphics
