#pragma once
#include <fstream>

#include "GeometryFigure.h"
#include "Line.h"
#include "Rect.h"
#include "Circle.h"
#include "Text.h"

class GeneratorSVG
{
    std::string file_name_ {"NewSVG.svg"};
    std::ofstream new_file_;
    std::string rezult_string_{};

    void start_generation();
    void end_generation();
    

public:
    GeneratorSVG():
    new_file_(file_name_)
    {
        start_generation();
    }
    
    template <class T>
    void add(Figure<T>& figure);
    void generate();

    ~GeneratorSVG() {}
};
