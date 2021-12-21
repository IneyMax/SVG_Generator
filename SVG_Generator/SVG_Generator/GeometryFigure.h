#pragma once
#include <string>
#include "Color.h"
#include "Point.h"

template <class T>
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
    
    virtual std::string create_string() = 0;
    
    virtual ~Figure(){}
    T& set_start_point(Point start_point);
    T& set_line_width(int width);
    T* set_color_fill(Color color);
    T& set_color_line(Color color);
};


template <class T>
T& Figure<T>::set_start_point(Point start_point)
{
    start_point_ = start_point;
    return *this;
}

template <class T>
T& Figure<T>::set_line_width(int width)
{
    line_width_ = width;
    return *this;
}

template <class T>
T* Figure<T>::set_color_fill(Color color)
{
    color_fill_ = Color(color);
    return this;
}

template <class T>
T& Figure<T>::set_color_line(Color color)
{
    color_line_ = Color(color);
    return *this;
}
