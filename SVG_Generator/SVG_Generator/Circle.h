#pragma once
#include "GeometryFigure.h"

class Circle  : public Figure
{
    int radius_ {};
    
public:
    Circle () {}

    Circle& set_start_point(Point start_point);
    Circle& set_line_width(int width);
    Circle& set_color_fill(RGB color);
    Circle& set_color_line(RGB color);
    Circle& set_color_fill(std::string color_fill);
    Circle& set_color_line(std::string color_line);
    Circle& set_radius(int radius);
    
    std::string create_string() override;

    virtual ~Circle() {}
};
