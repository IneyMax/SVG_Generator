#pragma once
#include "GeometryFigure.h"

class Text : public Figure
{
    int offset_x_ {};
    int offset_y_ {};
    int font_size_ {};
    std::string font_family_ {};
    std::string text_data_ {};

public:
    Text () {}

    Text& set_start_point(Point start_point);
    Text& set_line_width(int width);
    Text& set_color_fill(RGB color);
    Text& set_color_line(RGB color);
    Text& set_color_fill(std::string color_fill);
    Text& set_color_line(std::string color_line);
    Text& set_offset (int offset_x, int offset_y);
    Text& set_font_size (int font_size);
    Text& set_font_family (std::string font_family);
    Text& set_text (const std::string& new_text);

    std::string create_string() override;
    
    virtual ~Text(){}
};
