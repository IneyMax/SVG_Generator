#include "Circle.h"

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