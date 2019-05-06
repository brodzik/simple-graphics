#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <functional>

#include "doctest/doctest.h"
#include "simplegraphics/simplegraphics.hpp"

using namespace SimpleGraphics;

TEST_CASE("")
{
    Shapes::Complex img(0, 0);
    img.add(Shapes::Rectangle(0, 0, 150, 50));
    img.add(Shapes::Rectangle(0, 50, 50, 50));
    img.add(Shapes::Circle(100, 100, 25));

    CHECK(1 == 1);
}
