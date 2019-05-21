#pragma once

#include "simplegraphics/objects/object.hpp"

namespace SimpleGraphics {

class Line : public Object
{
public:
    explicit Line(const Double &x1, const Double &y1, const Double &x2, const Double &y2, const std::string &stroke)
        : Object("line")
    {
        set_attribute(AttributeDouble("x1", x1));
        set_attribute(AttributeDouble("y1", y1));
        set_attribute(AttributeDouble("x2", x2));
        set_attribute(AttributeDouble("y2", y2));
        set_attribute(AttributeString("stroke", stroke));
    }

    explicit Line(const Double &x1, const Double &y1, const Double &x2, const Double &y2)
        : Line(x1, y1, x2, y2, "#000000")
    {
    }

    explicit Line(const Point &p1, const Point &p2, const std::string &stroke)
        : Line(p1.x, p1.y, p2.x, p2.y, stroke)
    {
    }

    explicit Line(const Point &p1, const Point &p2)
        : Line(p1.x, p1.y, p2.x, p2.y, "#000000")
    {
    }
};

}  // namespace SimpleGraphics
