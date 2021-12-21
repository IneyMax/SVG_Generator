#pragma once
#include "GeometryFigure.h"

class Rect : public Figure <Rect>
{
    int width_ {};
    int height_ {};
    
public:
    Rect() {}
    
    Rect& set_wigth(int wigth);
    Rect& set_height(int height);
    
    std::string create_string() override;
    
    virtual ~Rect() {}
};
