#pragma once

#include <string>

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

}  // namespace SimpleGraphics
