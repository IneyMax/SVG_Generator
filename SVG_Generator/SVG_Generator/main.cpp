#include "GeneratorSVG.h"

int main()
{
    GeneratorSVG svg;

    Line line(Point(10,30), Point(80, 120));
    line.set_start_point(Point())
    .set_color_fill(Color(""));
    
    /*
    line
    .set_color_line(Color("green"))
    .set_color_line(Color(RGB(140, 198, 63)))
    .set_line_width(6);
    svg.add(line);

    /*
    Rect rect;
    rect
    .set_wigth(50)
    .set_height(60)
    .set_start_point(Point(80, 70))
    .set_color_line(Color("yellow"))
    .set_line_width(3)
    .set_color_fill(Color(RGB(140, 198, 63)));
    svg.add(rect);
    
    Circle circle;
    circle
    .set_radius(25)
    .set_start_point(Point(150, 20))
    .set_color_fill(Color(RGB(255, 0, 0)));
    svg.add(circle);

    Text text;
    text
    .set_offset(10, -10)
    .set_font_size(16)
    .set_font_family("Arial")
    .set_text("Hello world")
    .set_start_point(Point(10, 200))
    .set_color_fill(Color("blue"));
    svg.add(text);
    */
    svg.generate();
    
    return 0;
}
