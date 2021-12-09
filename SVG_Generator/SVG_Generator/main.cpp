
#include "Geometry_Figure.h"

int main()
{
    // TODO Написать нормальные тесты
    Line my_line_1(1,2, Point(3, 4));
    Line my_line_2(5,6, 7, 8);
    Line my_line_3(Point(9, 10), Point(11, 12));
    Line my_line_4(Point(13, 14), 15,16);
    Line my_line_5(my_line_1);
    Line my_line_6{};

    my_line_1 = my_line_2;

    my_line_1.print_line();
    my_line_2.print_line();
    my_line_3.print_line();
    my_line_4.print_line();
    my_line_5.print_line();

    Point my_point_1 (11, 22);
    Point my_point_2 (Point(33, 44));
    Point my_point_3 (my_point_1);
    my_point_1 = my_point_3;
    
    Rect my_rect_1 (my_point_1, my_point_2.get_point_coord());

    my_rect_1.print_rect();

    Circle my_circle (my_point_1, 10);
    
    return 0;
}
