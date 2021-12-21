#include "Line.h"

Line* Line::set_end_point(Point end_point)
{
    end_point_ = end_point;
    return this;
}

std::string Line::create_string()
{
    std::string new_string;
    new_string.append("<line x1=\"");
    new_string.append(start_point_.get_string_x_coord());
    new_string.append("\" y1=\"");
    new_string.append(start_point_.get_string_y_coord());
    new_string.append("\" x2=\"");
    new_string.append(end_point_.get_string_x_coord());
    new_string.append("\" y2=\"");
    new_string.append(end_point_.get_string_y_coord());
    new_string.append("\" stroke-width=\"");
    new_string.append(std::to_string(line_width_));
    new_string.append("\" stroke=\"");
    new_string.append(color_line_.get_color_string());
    new_string.append("\" />");
    return new_string;
}