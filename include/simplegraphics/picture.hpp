#pragma once

#include <memory>
#include <utility>
#include <vector>

#include "simplegraphics/shapes/rectangle.hpp"
#include "simplegraphics/shapes/shape.hpp"

namespace SimpleGraphics {

class Picture
{
public:
    Picture()
    {
    }

    void addRectangle(const Shapes::Rectangle &rect)
    {
        shapes.push_back(std::make_shared<Shapes::Rectangle>(rect));
    }

    friend Picture &operator<<(Picture &p, const Shapes::Rectangle &rect)
    {
        p.addRectangle(rect);
        return p;
    }

    const std::vector<std::shared_ptr<Shapes::Shape>> &getShapes() const
    {
        return shapes;
    }

private:
    std::vector<std::shared_ptr<Shapes::Shape>> shapes;
};

}  // namespace SimpleGraphics
