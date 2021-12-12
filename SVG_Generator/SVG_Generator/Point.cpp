#include "Point.h"
#include <iostream>


void Point::print_coord() const
{
    std::cout << "(X:" << coord_x_ << " Y:" << coord_y_ << ")";

}

void Point::set_coord(int x, int y)
{
    coord_x_ = x;
    coord_y_ = y;
}

void Point::set_coord(const std::pair<int, int> pair_coord)
{
    coord_x_ = pair_coord.first;
    coord_y_ = pair_coord.second;
}

void Point::set_coord(const Point& ref_to_point)
{
    coord_x_ = ref_to_point.coord_x_;
    coord_y_ = ref_to_point.coord_y_;
}

std::pair<int, int> Point::get_point_coord()
{
    return std::make_pair(coord_x_, coord_y_);
}

int Point::get_x_coord()
{
    return coord_x_;
}

int Point::get_y_coord()
{
    return coord_y_;
}

std::string Point::get_string_x_coord()
{
    return std::to_string(coord_x_);
}

std::string Point::get_string_y_coord()
{
    return std::to_string(coord_y_);
}

Point Point::get_start_point() const
{
    return Point(coord_x_, coord_y_);
}

Point Point::operator+(const Point &second_point) const
{
    return Point (coord_x_ + second_point.coord_x_, coord_y_ + second_point.coord_y_);
}

Point Point::operator-(const Point &second_point) const
{
    return Point (coord_x_ - second_point.coord_x_, coord_y_ - second_point.coord_y_);
}

bool Point::operator < (const Point &second_point) const
{
    if (coord_x_ * coord_y_ < second_point.coord_x_ * second_point.coord_y_)
    {
        return true;
    }
    return false;
}

bool Point::operator == (const Point &second_point) const
{
    if (coord_x_ == second_point.coord_x_ && coord_y_ == second_point.coord_y_)
    {
        return true;
    }
    return false;
}
