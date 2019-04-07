#include "simplegraphics/simplegraphics.hpp"

using namespace SimpleGraphics;
using namespace SimpleGraphics::Drawables;

int main()
{
    Complex img(0, 0);
    img.add(Rectangle(0, 0, 150, 50));
    img.add(Rectangle(0, 50, 50, 50));
    img.add(Circle(100, 100, 25));
    Circle(0, 0, 100).saveAsSVG("test_circle.svg");
    Polyline({{0, 0}, {50, 50}, {0, 100}}).saveAsSVG("test_polyline.svg");
    img.saveAsSVG("test.svg");
    return 0;
}
