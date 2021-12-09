#include "Geometry_Figure.h"

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
    // TODO Операция сравнения для точек
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

void Line::print_line()
{
    std::cout << "Start line: ";
    start_line_.print_coord();
    std::cout << " End line: ";
    end_point_.print_coord();
    std::cout << std::endl;
}

std::pair<Point, Point> Line::get_line()
{
    return std::make_pair(start_line_, end_point_);
}

void Line::set_start_line(int x, int y)
{
    start_line_.set_coord(x, y);
}

void Line::set_start_line(const Point & ref_to_point)
{
    start_line_ = ref_to_point;
}

void Line::set_end_line(int x, int y)
{
    end_point_.set_coord(x, y);
}

void Line::set_end_line(const Point & ref_to_point)
{
    end_point_ = ref_to_point;
}

void Rect::print_rect()
{
    lu_point_.print_coord();
    ld_point_.print_coord();
    ru_point_.print_coord();
    rd_point_.print_coord();
    std::cout << std::endl;
}
