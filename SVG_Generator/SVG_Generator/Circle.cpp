#include "Circle.h"

Circle& Circle::set_start_point(Point start_point)
{
    Figure::set_start_point(start_point);
    return *this;
}

Circle& Circle::set_line_width(int width)
{
    Figure::set_line_width(width);
    return *this;
}

Circle& Circle::set_color_fill(RGB color)
{
    Figure::set_color_fill(color);
    return *this;
}

Circle& Circle::set_color_line(RGB color)
{
    Figure::set_color_line(color);
    return *this;
}

Circle& Circle::set_color_fill(std::string color_fill)
{
    Figure::set_color_fill(color_fill);
    return *this;
}

Circle& Circle::set_color_line(std::string color_line)
{
    Figure::set_color_line(color_line);
    return *this;
}

Circle& Circle::set_radius(int radius)
{
    radius_ = radius;
    return *this;
}

std::string Circle::create_string()
{
    std::string new_string;
    new_string.append("<circle cx=\"");
    new_string.append(start_point_.get_string_x_coord());
    new_string.append("\" cy=\"");
    new_string.append(start_point_.get_string_y_coord());
    new_string.append("\" r=\"");
    new_string.append(std::to_string(radius_));
    new_string.append("\" stroke-width=\"");
    new_string.append(std::to_string(line_width_));
    new_string.append("\" fill=\"");
    new_string.append(color_fill_.get_color_string());
    new_string.append("\" stroke=\"");
    new_string.append(color_line_.get_color_string());
    new_string.append("\" />");
    return new_string;
}