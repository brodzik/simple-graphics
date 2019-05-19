#include "doctest.h"
#include "simplegraphics/simplegraphics.hpp"

namespace SG = SimpleGraphics;

TEST_CASE("Ease of use")
{
    SG::Complex img1;
    img1.add(SG::Circle(100, 100, 100));
    img1.add(SG::Circle(100, 100, 50, "#FF0000"));
    img1.add(SG::Circle(100, 100, 25, "#00FF00", "#0000FF"));
    img1.save("test_5_1.svg");

    CHECK(img1.to_svg() == "<svg ><circle cx=\"100\" cy=\"100\" r=\"100\" ></circle><circle cx=\"100\" cy=\"100\" fill=\"#FF0000\" r=\"50\" ></circle><circle cx=\"100\" cy=\"100\" fill=\"#00FF00\" r=\"25\" stroke=\"#0000FF\" ></circle></svg>");

    SG::Complex img2;
    img2.add(SG::Ellipse(300, 300, 50, 150, "#00FF00"));
    img2.add(SG::Rectangle(300, 300, 100, "none", "#FF00FF"));
    img2.save("test_5_2.svg");

    CHECK(img2.to_svg() == "<svg ><ellipse cx=\"300\" cy=\"300\" fill=\"#00FF00\" rx=\"50\" ry=\"150\" ></ellipse><rect fill=\"none\" height=\"100\" stroke=\"#FF00FF\" width=\"100\" x=\"300\" y=\"300\" ></rect></svg>");
}
