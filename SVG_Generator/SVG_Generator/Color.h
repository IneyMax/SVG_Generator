#pragma once
#include <string>

class RGB
{
    int m_red_ {};
    int m_green_ {};
    int m_blue_ {};
    
public:
    RGB(){}
    
    RGB(int m_red, int m_green, int m_blue)
    :m_red_(m_red),
    m_green_(m_green),
    m_blue_(m_blue)
    {}

    std::string get_red();
    std::string get_green();
    std::string get_blue();
    
    void print_color();

    ~RGB(){}
};

class Color
{
    RGB rgb_color {};
    bool b_rgb_format {};
    std::string string_color_ {};
    
public:
    Color(){}
    
    explicit Color(const RGB& current_color)
        : rgb_color(current_color),
          b_rgb_format(true)
    {
    }

    explicit Color(const std::string& current_color)
        : string_color_(current_color)
    {
    }
    
    std::string get_color_string();
    
    ~Color(){}
};
