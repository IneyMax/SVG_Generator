#pragma once
#include <string>
#include <utility>

class Point
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

    // Копирующий конструктор
    Point(const Point& old_point)
        : coord_x_(old_point.coord_x_),
          coord_y_(old_point.coord_y_)
    {
    }

    void print_coord () const;
    void set_coord(int x, int y);
    void set_coord(std::pair<int, int> pair_coord);
    void set_coord(const Point & ref_to_point);
    std::pair<int, int> get_point_coord();
    int get_x_coord();
    int get_y_coord();
    std::string get_string_x_coord();
    std::string get_string_y_coord();
    Point get_start_point() const;

    Point operator + (const Point &second_point) const;
    Point operator - (const Point &second_point) const;
    bool operator < (const Point &second_point) const;
    bool operator == (const Point &second_point) const;
    
    virtual ~Point() = default;
};
