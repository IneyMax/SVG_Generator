#include "Rect.h"


Rect& Rect::set_wigth(int wigth)
{
    width_ = wigth;
    return *this;
}

Rect& Rect::set_height(int height)
{
    height_ = height;
    return *this;
}

std::string Rect::create_string()
{
    std::string new_string;
    new_string.append("<rect x=\"");
    new_string.append(start_point_.get_string_x_coord());
    new_string.append("\" y=\"");
    new_string.append(start_point_.get_string_y_coord());
    new_string.append("\" width=\"");
    new_string.append(std::to_string(width_));
    new_string.append("\" height=\"");
    new_string.append(std::to_string(height_));
    new_string.append("\" stroke-width=\"");
    new_string.append(std::to_string(line_width_));
    new_string.append("\" fill=\"");
    new_string.append(color_fill_.get_color_string());
    new_string.append("\" stroke=\"");
    new_string.append(color_line_.get_color_string());
    new_string.append("\" />");
    return new_string;
}
