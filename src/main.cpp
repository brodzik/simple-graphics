#include "simplegraphics/simplegraphics.hpp"

using namespace SimpleGraphics;
using namespace SimpleGraphics::Drawables;

int main()
{
    Complex img(50, 50);
    img.add(Rectangle(0, 0, 100, 50));
    img.add(Rectangle(50, 50, 50, 50));
    img.add(img);
    img.saveAsSVG("test.svg");
    return 0;
}
