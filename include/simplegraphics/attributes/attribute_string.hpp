#pragma once

#include "fmt/format.h"
#include "simplegraphics/attributes/attribute.hpp"

namespace SimpleGraphics {

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
