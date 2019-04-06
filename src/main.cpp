#include "simplegraphics/simplegraphics.hpp"

using namespace SimpleGraphics;
using namespace SimpleGraphics::Drawables;

int main()
{
    Complex img(0, 0);
    img.add(Rectangle(0, 0, 150, 50));
    img.add(Rectangle(0, 50, 50, 50));
    img.saveAsSVG("test.svg");
    return 0;
}
