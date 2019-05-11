#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest/doctest.h"
#include "simplegraphics/simplegraphics.hpp"

TEST_CASE("Complex shapes")
{
    SimpleGraphics::Complex img1({0}, {0});
    img1.save_to_file("test_3_1.svg");
    CHECK(img1.to_svg() == "<svg x=\"0\" y=\"0\" ></svg>");

    SimpleGraphics::Complex img2({0}, {0});
    img2.add(SimpleGraphics::Rectangle({0}, {0}, {100}, {50}));
    img2.add(SimpleGraphics::Rectangle({50}, {50}, {50}, {50}));
    img2.save_to_file("test_3_2.svg");
    CHECK(img2.to_svg() == "<svg x=\"0\" y=\"0\" ><rect height=\"50\" width=\"100\" x=\"0\" y=\"0\" ></rect><rect height=\"50\" width=\"50\" x=\"50\" y=\"50\" ></rect></svg>");

    SimpleGraphics::Complex img3({0}, {0});
    img3.add(img2);
    img2.set_attribute(SimpleGraphics::AttributeDouble("x", {100}));
    img2.set_attribute(SimpleGraphics::AttributeDouble("y", {100}));
    img3.add(img2);
    img3.save_to_file("test_3_3.svg");
    CHECK(img3.to_svg() == "<svg x=\"0\" y=\"0\" ><svg x=\"0\" y=\"0\" ><rect height=\"50\" width=\"100\" x=\"0\" y=\"0\" ></rect><rect height=\"50\" width=\"50\" x=\"50\" y=\"50\" ></rect></svg><svg x=\"100\" y=\"100\" ><rect height=\"50\" width=\"100\" x=\"0\" y=\"0\" ></rect><rect height=\"50\" width=\"50\" x=\"50\" y=\"50\" ></rect></svg></svg>");
}
