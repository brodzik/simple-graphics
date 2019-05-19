# simple-graphics
[![Build Status](https://travis-ci.org/brodzik/simple-graphics.svg?branch=master)](https://travis-ci.org/brodzik/simple-graphics)

Scalable Vector Graphics (SVG) file generator.

## Example
```cpp
#include "simplegraphics/simplegraphics.hpp"
namespace SG = SimpleGraphics;

int main()
{
    SG::Complex img;

    img.add(SG::Rectangle(0, 0, 100, 50, "#FF0000"));
    img.add(SG::Rectangle(50, 50, 50, "#00FF00"));
    img.add(SG::Circle(25, 75, 25, "#0000FF"));

    img.save("test.svg");

    return 0;
}
```

## Testing
```bash
mkdir build
cd build
cmake ..
cmake --build . --
ctest --output-on-failure
```
