#pragma once
#include "GeometryFigure.h"

class Line : public Figure <Line>
{
    Point end_point_;
public:
    Line(){}

    Line (Point start_point, Point end_point):
    Figure(start_point),
    end_point_(end_point)
    {
    }
    
    Line* set_end_point(Point end_point);
    std::string create_string() override;

    virtual ~Line(){}
};
