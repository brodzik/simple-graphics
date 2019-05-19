#include "doctest.h"
#include "simplegraphics/simplegraphics.hpp"

TEST_CASE("Custom attributes")
{
    SimpleGraphics::Rectangle rectangle(0, 0, SimpleGraphics::Double {0.5, true}, SimpleGraphics::Double {0.25, true});
    rectangle.set_attribute(SimpleGraphics::AttributeString("fill", "#FFA500"));
    rectangle.set_attribute(SimpleGraphics::AttributeString("stroke", "#FF0000"));
    rectangle.set_attribute(SimpleGraphics::AttributeString("stroke-width", "5"));
    rectangle.save("test_2.svg");

    CHECK(rectangle.to_svg() == "<rect fill=\"#FFA500\" height=\"25%\" stroke=\"#FF0000\" stroke-width=\"5\" width=\"50%\" x=\"0\" y=\"0\" ></rect>");
}
