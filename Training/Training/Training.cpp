//Ex Rectangle week 5 session 1
#include <iostream>
#include "Rectangle.h"
using namespace std;
int main()
{
	Rectangle rec;
	rec.set_length(5);
	rec.set_width(2);
	cout << rec.calculate_area() << endl;
	cout << "goog bye";
	return 0;
}