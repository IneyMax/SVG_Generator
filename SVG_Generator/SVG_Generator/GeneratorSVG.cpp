#include "GeneratorSVG.h"

void GeneratorSVG::start_generation()
{
    new_file_ << "<?xml version=\"1.0\" encoding=\"UTF-8\" ?>\n";
    new_file_ << "<!DOCTYPE svg PUBLIC \"-//W3C//DTD SVG 1.1//EN\"\n" ;
    new_file_ << "\"http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\">\n" ;
    new_file_ << "<svg version=\"1.1\"\n";
    new_file_ << "baseProfile=\"full\"\n";
    new_file_ << "xmlns=\"http://www.w3.org/2000/svg\"\n";
    new_file_ << "xmlns:xlink=\"http://www.w3.org/1999/xlink\"\n";
    new_file_ << "xmlns:ev=\"http://www.w3.org/2001/xml-events\">\n";
}

void GeneratorSVG::end_generation()
{
    new_file_ << "</svg>";
    new_file_.close();
}

void GeneratorSVG::add(Figure& figure)
{
    new_file_ << figure.create_string();
    new_file_ << "\n";
}
