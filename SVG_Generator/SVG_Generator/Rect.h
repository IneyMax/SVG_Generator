#pragma once
#include "GeometryFigure.h"

class Rect : public Figure
{
    int width_ {};
    int height_ {};
    
public:
    Rect() {}

    Rect& set_start_point(Point start_point);
    Rect& set_line_width(int width);
    Rect& set_color_fill(RGB color);
    Rect& set_color_line(RGB color);
    Rect& set_color_fill(std::string color_fill);
    Rect& set_color_line(std::string color_line);
    Rect& set_wigth(int wigth);
    Rect& set_height(int height);
    
    std::string create_string() override;
    
    virtual ~Rect() {}
};
