#pragma once

#include "simplegraphics/objects/object.hpp"

namespace SimpleGraphics {

class Rectangle : public Object
{
public:
    explicit Rectangle(const Double &x, const Double &y, const Double &width, const Double &height, const std::string &fill, const std::string &stroke)
        : Rectangle(x, y, width, height, fill)
    {
        set_attribute(AttributeString("stroke", stroke));
    }

    explicit Rectangle(const Double &x, const Double &y, const Double &width, const Double &height, const std::string &fill)
        : Rectangle(x, y, width, height)
    {
        set_attribute(AttributeString("fill", fill));
    }

    explicit Rectangle(const Double &x, const Double &y, const Double &width, const Double &height)
        : Object("rect")
    {
        set_attribute(AttributeDouble("x", x));
        set_attribute(AttributeDouble("y", y));
        set_attribute(AttributeDouble("width", width));
        set_attribute(AttributeDouble("height", height));
    }

    explicit Rectangle(const Double &x, const Double &y, const Double &length, const std::string &fill, const std::string &stroke)
        : Rectangle(x, y, length, fill)
    {
        set_attribute(AttributeString("stroke", stroke));
    }

    explicit Rectangle(const Double &x, const Double &y, const Double &length, const std::string &fill)
        : Rectangle(x, y, length)
    {
        set_attribute(AttributeString("fill", fill));
    }

    explicit Rectangle(const Double &x, const Double &y, const Double &length)
        : Rectangle(x, y, length, length)
    {
    }

    explicit Rectangle(const Point &p, const Double &width, const Double &height, const std::string &fill, const std::string &stroke)
        : Rectangle(p.x, p.y, width, height, fill, stroke)
    {
    }

    explicit Rectangle(const Point &p, const Double &width, const Double &height, const std::string &fill)
        : Rectangle(p.x, p.y, width, height, fill)
    {
    }

    explicit Rectangle(const Point &p, const Double &width, const Double &height)
        : Rectangle(p.x, p.y, width, height)
    {
    }

    explicit Rectangle(const Point &p, const Double &length, const std::string &fill, const std::string &stroke)
        : Rectangle(p.x, p.y, length, fill, stroke)
    {
    }

    explicit Rectangle(const Point &p, const Double &length, const std::string &fill)
        : Rectangle(p.x, p.y, length, fill)
    {
    }

    explicit Rectangle(const Point &p, const Double &length)
        : Rectangle(p.x, p.y, length, length)
    {
    }
};

}  // namespace SimpleGraphics
