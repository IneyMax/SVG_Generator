#pragma once
#include <string>
#include "Color.h"
#include "Point.h"

class Figure
{
protected:
    Point start_point_ {};
    Color color_fill_{};
    Color color_line_{};
    int line_width_ {};

    explicit Figure(const Point start_point):
    start_point_(start_point)
    {
    }
    
public:
    Figure(){}

    // TODO Вопрос к преподавателю: как можно реализовать цепочку вызовов для дочерних объектов?
    virtual Figure& set_start_point(Point start_point);
    virtual Figure& set_line_width(int width);
    virtual Figure& set_color_fill(RGB color);
    virtual Figure& set_color_line(RGB color);
    virtual Figure& set_color_fill(std::string color_fill);
    virtual Figure& set_color_line(std::string color_line);

    virtual std::string create_string() = 0;
    
    virtual ~Figure(){}
};


