#pragma once

#include "fmt/format.h"
#include "simplegraphics/attributes/attribute.hpp"

namespace SimpleGraphics {

struct Double
{
    double value = 0;
    bool relative = false;

    Double(double value)
        : value(value)
    {
    }

    Double(double value, bool relative)
        : value(value)
        , relative(relative)
    {
    }
};

struct Point
{
    Double x, y;
};

class AttributeDouble : public Attribute
{
public:
    double value;
    bool relative;

    explicit AttributeDouble(const std::string &name, double value, bool relative)
        : Attribute(name)
        , value(value)
        , relative(relative)
    {
    }

    explicit AttributeDouble(const std::string &name, const Double &d)
        : AttributeDouble(name, d.value, d.relative)
    {
    }

    std::string to_string()
    {
        if (relative)
        {
            return fmt::format("{0}=\"{1}%\"", name, 100 * value);
        }
        else
        {
            return fmt::format("{0}=\"{1}\"", name, value);
        }
    }
};

}  // namespace SimpleGraphics
