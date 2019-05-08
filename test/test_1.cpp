#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest/doctest.h"
#include "simplegraphics/simplegraphics.hpp"

TEST_CASE("")
{
    SimpleGraphics::Complex img({0}, {0});
    img.add(SimpleGraphics::Circle({0}, {0}, {100}));
    img.add(SimpleGraphics::Circle({0.5, true}, {50}, {200}));
    img.save_to_file("test_1.svg");

    CHECK(1 == 1);
}
