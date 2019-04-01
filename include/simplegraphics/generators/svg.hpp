#pragma once

#include <fstream>

#include "simplegraphics/picture.hpp"

namespace SimpleGraphics {
namespace Generators {

class SVG
{
public:
    SVG() = delete;
    ~SVG() = delete;

    static void save(const std::string &filename, const Picture &picture)
    {
        std::ofstream file(filename);

        if (file.is_open())
        {
            file << "<?xml version=\"1.0\" standalone=\"no\"?>\n";
            file << "<svg xmlns=\"http://www.w3.org/2000/svg\" version=\"1.1\">\n";

            for (auto a : picture.getShapes())
            {
                file << a->toSVG();
            }

            file << "</svg>\n";

            file.close();
        }
        else
        {
            throw;
        }
    }
};

}  // namespace Generators
}  // namespace SimpleGraphics
