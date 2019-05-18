#pragma once

#include <vector>

#include "simplegraphics/objects/object.hpp"

namespace SimpleGraphics {

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
