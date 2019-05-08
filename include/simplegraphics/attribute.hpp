#pragma once

#include <string>

#include "fmt/format.h"

namespace SimpleGraphics {

class Attribute
{
public:
    const std::string name;

    explicit Attribute(const std::string &name)
        : name(name)
    {
    }

    virtual ~Attribute()
    {
    }

    virtual std::string to_string() = 0;
};

struct Double
{
    double value = 0;
    bool relative = false;
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

class AttributeString : public Attribute
{
public:
    std::string value;

    explicit AttributeString(const std::string &name, const std::string &value)
        : Attribute(name)
        , value(value)
    {
    }

    std::string to_string()
    {
        return fmt::format("{0}=\"{1}\"", name, value);
    }
};

}  // namespace SimpleGraphics
