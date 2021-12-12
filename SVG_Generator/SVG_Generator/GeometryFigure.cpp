#include "GeometryFigure.h"


Figure& Figure::set_start_point(Point start_point)
{
    start_point_ = start_point;
    return *this;
}

Figure& Figure::set_line_width(int width)
{
    line_width_ = width;
    return *this;
}

Figure& Figure::set_color_fill(RGB color_fill)
{
    color_fill_ = Color(color_fill);
    return *this;
}

Figure& Figure::set_color_line(RGB color_line)
{
    color_line_ = Color(color_line);
    return *this;
}

Figure& Figure::set_color_fill(std::string color_fill)
{
    color_fill_ = Color(color_fill);
    return *this;
}

Figure& Figure::set_color_line(std::string color_line)
{
    color_line_ = Color(color_line);
    return *this;
}
