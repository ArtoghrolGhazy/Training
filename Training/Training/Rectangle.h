#pragma once
class Rectangle
{
private:
	float Length;
	float Width;
public:
	void set_length(float l);
	float get_length();
	void set_width(float w);
	float get_width();
	float calculate_area();
	Rectangle();
	~Rectangle();

};

