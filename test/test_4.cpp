#include "doctest.h"
#include "simplegraphics/simplegraphics.hpp"

TEST_CASE("Scaling complex shapes")
{
    SimpleGraphics::Complex img1(0, 0);
    img1.add(SimpleGraphics::Rectangle(0, 0, SimpleGraphics::Double {0.5, true}, SimpleGraphics::Double {0.25, true}));
    img1.add(SimpleGraphics::Rectangle(SimpleGraphics::Double {0.25, true}, SimpleGraphics::Double {0.25, true}, SimpleGraphics::Double {0.25, true}, SimpleGraphics::Double {0.25, true}));

    SimpleGraphics::Complex img2(0, 0, 500, 500);
    img2.add(img1);
    img1.set_attribute(SimpleGraphics::AttributeDouble("x", 0.5, true));
    img1.set_attribute(SimpleGraphics::AttributeDouble("y", 0.5, true));
    img2.add(img1);
    img2.save("test_4.svg");

    CHECK(img2.to_svg() == "<svg height=\"500\" width=\"500\" x=\"0\" y=\"0\" ><svg x=\"0\" y=\"0\" ><rect height=\"25%\" width=\"50%\" x=\"0\" y=\"0\" ></rect><rect height=\"25%\" width=\"25%\" x=\"25%\" y=\"25%\" ></rect></svg><svg x=\"50%\" y=\"50%\" ><rect height=\"25%\" width=\"50%\" x=\"0\" y=\"0\" ></rect><rect height=\"25%\" width=\"25%\" x=\"25%\" y=\"25%\" ></rect></svg></svg>");
}
