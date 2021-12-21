#include "Text.h"


Text& Text::set_offset(int offset_x, int offset_y)
{
    offset_x_ = offset_x;
    offset_y_ = offset_y;
    return *this;
}

Text& Text::set_font_size(int font_size)
{
    font_size_ = font_size;
    return *this;
}

Text& Text::set_font_family(std::string font_family)
{
    font_family_ = font_family;
    return *this;
}

Text& Text::set_text(const std::string& new_text)
{
    text_data_ = new_text;
    return *this;
}


std::string Text::create_string()
{
    std::string new_string;
    new_string.append("<text x=\"");
    new_string.append(start_point_.get_string_x_coord());
    new_string.append("\" y=\"");
    new_string.append(start_point_.get_string_y_coord());
    new_string.append("\" dx=\"");
    new_string.append(std::to_string(offset_x_));
    new_string.append("\" dy=\"");
    new_string.append(std::to_string(offset_y_));
    new_string.append("\" font-size=\"");
    new_string.append(std::to_string(font_size_));
    new_string.append("\" font-family=\"");
    new_string.append(font_family_);
    new_string.append("\" stroke-width=\"");
    new_string.append(std::to_string(line_width_));
    new_string.append("\" stroke=\"");
    new_string.append(color_line_.get_color_string());
    new_string.append("\" fill=\"");
    new_string.append(color_fill_.get_color_string());
    new_string.append("\">");
    new_string.append(text_data_);
    new_string.append("</text>");
    return new_string;
}