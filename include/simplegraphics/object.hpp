#pragma once

#include <fstream>
#include <map>
#include <memory>
#include <utility>

#include "simplegraphics/attribute.hpp"

namespace SimpleGraphics {

class Object
{
public:
    const std::string name;

    explicit Object(const std::string &name)
        : name(name)
    {
    }

    template <class T>
    void set_attribute(const T &obj)
    {
        attributes[obj.name] = std::make_shared<T>(obj);
    }

    virtual std::string get_inner_svg()
    {
        return "";
    }

    std::string to_svg()
    {
        std::string s = "";

        for (auto a : attributes)
        {
            s += a.second->to_string() + " ";
        }

        return fmt::format("<{0} {1}>{2}</{0}>", name, s, get_inner_svg());
    }

    void save_to_file(const std::string &filename)
    {
        std::ofstream file(filename);

        if (file.is_open())
        {
            file << "<svg xmlns=\"http://www.w3.org/2000/svg\">";
            file << to_svg();
            file << "</svg>";
        }
        else
        {
            throw;
        }
    }

private:
    std::map<std::string, std::shared_ptr<Attribute>> attributes;
};

}  // namespace SimpleGraphics
