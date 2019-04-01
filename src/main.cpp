#include "simplegraphics/generators/svg.hpp"
#include "simplegraphics/picture.hpp"

using namespace SimpleGraphics;
using namespace SimpleGraphics::Generators;
using namespace SimpleGraphics::Shapes;

int main()
{
    Picture p;
    p << Rectangle(0, 0, 50, 50);
    p << Rectangle(123, 60, 400, 500);

    SVG::save("test123.svg", p);

    return 0;
}
