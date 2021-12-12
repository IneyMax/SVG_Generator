#include "Color.h"


std::string RGB::get_red()
{
    return std::to_string(m_red_);
}

std::string RGB::get_green()
{
    return std::to_string(m_green_);
}

std::string RGB::get_blue()
{
    return std::to_string(m_blue_);
}

void RGB::print_color()
{
    
}

std::string Color::get_color_string()
{
    std::string new_string;
    if (!string_color_.empty())
    {
        return string_color_;
    }
    new_string.append("rgb(");
    new_string.append(rgb_color.get_red());
    new_string.append(",");
    new_string.append(rgb_color.get_green());
    new_string.append(",");
    new_string.append(rgb_color.get_blue());
    new_string.append(")");
    return new_string;
}
