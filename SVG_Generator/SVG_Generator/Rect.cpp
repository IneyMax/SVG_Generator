#include "Rect.h"


Rect& Rect::set_start_point(Point start_point)
{
    Figure::set_start_point(start_point);
    return *this;
}

Rect& Rect::set_line_width(int width)
{
    Figure::set_line_width(width);
    return *this;
}

Rect& Rect::set_color_fill(RGB color)
{
    Figure::set_color_fill(color);
    return *this;
}

Rect& Rect::set_color_line(RGB color)
{
    Figure::set_color_line(color);
    return *this;
}

Rect& Rect::set_color_fill(std::string color_fill)
{
    Figure::set_color_fill(color_fill);
    return *this;
}

Rect& Rect::set_color_line(std::string color_line)
{
    Figure::set_color_line(color_line);
    return *this;
}

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
