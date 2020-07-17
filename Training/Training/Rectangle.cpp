#include "Rectangle.h"
#include <iostream>
void Rectangle::set_length(float l)
{
	Length = l;
}

float Rectangle::get_length()
{
	return Length;
}

void Rectangle::set_width(float w)
{
	Width = w;
}

float Rectangle::get_width()
{
	return Width;
}

float Rectangle::calculate_area()
{
	return Width*Length;
}

Rectangle::Rectangle()
{
}

Rectangle::~Rectangle()
{
}
