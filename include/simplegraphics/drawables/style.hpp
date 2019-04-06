#pragma once

#include <string>

namespace SimpleGraphics {
namespace Drawables {

class Style
{
public:
    std::string fill = "#000000";
    double fillOpacity = 1;
    std::string stroke = "#000000";
    double strokeOpacity = 1;
};

}  // namespace Drawables
}  // namespace SimpleGraphics
