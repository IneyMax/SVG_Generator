#pragma once
#include <string>


class Point
// TODO Добавить значения по умолчанию
{
    int coord_x_ {};
    int coord_y_ {};
    
public:
    // Конструктор по умолчанию
    Point() {}

    
    // Конструктор через целочисленные значения
    Point(const int coord_x, const int coord_y)
        : coord_x_(coord_x),
          coord_y_(coord_y)
    {
    }

    // Конструктор через пару
    explicit Point(std::pair<int, int> coord)
        : coord_x_(coord.first),
          coord_y_(coord.second)
    {
    }

    void print_coord () const;
    void set_coord(int x, int y);
    void set_coord(std::pair<int, int> pair_coord);
    void set_coord(const Point & ref_to_point);
    std::pair<int, int> get_point_coord();
    Point get_start_point() const;

    Point operator + (const Point &second_point) const;
    Point operator - (const Point &second_point) const;
    bool operator < (const Point &second_point) const;
    bool operator == (const Point &second_point) const;
    
    virtual ~Point() = default;
};


/*
 * Figure: // Интерфейс для всех фигур
 * 
 * line_color
 * line_weight
 * color_fill
 * start_point
 */

class Line : public Point
{
    // line_color
    // line_weight
    Point start_line_ {};
    Point end_point_ {};
    
public:

    Line(){}
    
    Line(const Point& start_line, const Point& end_line)
        : start_line_(start_line),
          end_point_(end_line)
    {
    }

    Line(int start_x_, int start_y, const Point& end_line)
    : start_line_(start_x_, start_y),
      end_point_(end_line)
    {
    }

    Line(const Point& start_line, int end_x, int end_y)
    : start_line_(start_line),
      end_point_(end_x, end_y)
    {
    }

    Line(int start_x_, int start_y, int end_x, int end_y)
    : start_line_(start_x_, start_y),
      end_point_(end_x, end_y)
    {
    }

    void print_line();
    std::pair<Point, Point> get_line();
    void set_start_line(int x, int y);
    void set_start_line(const Point & ref_to_point);
    void set_end_line(int x, int y);
    void set_end_line(const Point & ref_to_point);
};


class Rect : public Point
// TODO: Инициализация через точки - для многоугольников
{
    Point start_point_ {};
    int width_ {};
    int height_ {};
    Point lu_point_ {};
    Point ld_point_ {};
    Point ru_point_ {};
    Point rd_point_ {};
    
public:
    Rect() {}
    
    Rect(const Point& start_point, int height, int width)
        : start_point_(start_point),
          width_(width),
          height_(height),
          lu_point_(start_point_),
          ld_point_(start_point_.get_point_coord().first, start_point_.get_point_coord().second - height_),
          ru_point_(start_point_.get_point_coord().first + width_, start_point_.get_point_coord().second),
          rd_point_(start_point_.get_point_coord().first + width_, start_point_.get_point_coord().second - height_)
    {
    }

    Rect(const Point& start_point, std::pair<int, int> rect_size)
    : start_point_(start_point),
      width_(rect_size.first),
      height_(rect_size.second),
      lu_point_(start_point_),
      ld_point_(start_point_.get_point_coord().first, start_point_.get_point_coord().second - height_),
      ru_point_(start_point_.get_point_coord().first + width_, start_point_.get_point_coord().second),
      rd_point_(start_point_.get_point_coord().first + width_, start_point_.get_point_coord().second - height_)
    {
    }

    void print_rect ();
};



class Circle : public Point
{
    int radius_ {};
    
public:

    Circle(const int coord_x, const int coord_y, const int radius)
        : Point(coord_x, coord_y),
          radius_(radius)
    {
    }

    Circle(const Point& ref_to_point, const int radius)
        : Point(ref_to_point),
          radius_(radius)
    {
    }

    Circle(std::pair<int, int> cirle_coord, const int radius)
    : Point(cirle_coord),
      radius_(radius)
    {
    }
};


