#include "doctest.h"
#include "simplegraphics/simplegraphics.hpp"

TEST_CASE("Basic shapes")
{
    SimpleGraphics::Rectangle rectangle(0, 0, 50, 100);
    rectangle.save("test_1_1.svg");

    CHECK(rectangle.to_svg() == "<rect height=\"100\" width=\"50\" x=\"0\" y=\"0\" ></rect>");

    SimpleGraphics::Circle circle(0, 0, 100);
    circle.save("test_1_2.svg");

    CHECK(circle.to_svg() == "<circle cx=\"0\" cy=\"0\" r=\"100\" ></circle>");

    SimpleGraphics::Ellipse ellipse(50, 100, 50, 100);
    ellipse.save("test_1_3.svg");

    CHECK(ellipse.to_svg() == "<ellipse cx=\"50\" cy=\"100\" rx=\"50\" ry=\"100\" ></ellipse>");

    SimpleGraphics::Line line(50, 100, 50, 200);
    line.save("test_1_4.svg");

    CHECK(line.to_svg() == "<line stroke=\"#000000\" x1=\"50\" x2=\"50\" y1=\"100\" y2=\"200\" ></line>");
}
