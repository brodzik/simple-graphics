#pragma once

#include <vector>

#include "simplegraphics/object.hpp"

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

class Line : public Object
{
public:
    explicit Line(const Double &x1, const Double &x2, const Double &y1, const Double &y2)
        : Object("line")
    {
        set_attribute(AttributeDouble("x1", x1));
        set_attribute(AttributeDouble("x2", x2));
        set_attribute(AttributeDouble("y1", y1));
        set_attribute(AttributeDouble("y2", y2));
        set_attribute(AttributeString("stroke", "#000000"));
    }
};

class Complex : public Object
{
public:
    explicit Complex(const Double &x, const Double &y)
        : Object("svg")
    {
        set_attribute(AttributeDouble("x", x));
        set_attribute(AttributeDouble("y", y));
    }

    explicit Complex(const Double &x, const Double &y, const Double &width, const Double &height)
        : Complex(x, y)
    {
        set_attribute(AttributeDouble("width", width));
        set_attribute(AttributeDouble("height", height));
    }

    template <class T>
    void add(const T &obj)
    {
        objects.push_back(std::make_shared<T>(obj));
    }

    std::string get_inner_svg() override
    {
        std::string s;

        for (auto a : objects)
        {
            s += a->to_svg();
        }

        return s;
    }

private:
    std::vector<std::shared_ptr<Object>> objects;
};

}  // namespace SimpleGraphics
