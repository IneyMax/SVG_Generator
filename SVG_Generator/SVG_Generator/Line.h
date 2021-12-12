#pragma once
#include "GeometryFigure.h"

class Line : public Figure
{
    Point end_point_;
public:
    Line(){}

    Line (Point start_point, Point end_point):
    Figure(start_point),
    end_point_(end_point)
    {
    }

    // TODO: Как исключить (и надо ли) из цепочки вызова метооды родительского класса
    Line& set_start_point(Point start_point);
    Line& set_line_width(int width);
    Line& set_color_line(RGB color);
    Line& set_color_line(std::string color_line);
    
    Line& set_end_point(Point end_point);
    std::string create_string() override;

    virtual ~Line(){}
};
