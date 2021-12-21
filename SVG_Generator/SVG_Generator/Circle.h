#pragma once
#include "GeometryFigure.h"

class Circle  : public Figure <Circle>
{
    int radius_ {};
    
public:
    Circle () {}
    
    Circle& set_radius(int radius);
    
    std::string create_string() override;

    virtual ~Circle() {}
};
