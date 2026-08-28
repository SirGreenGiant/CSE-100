/* Problem 1: Write a C++ program to read the length and
width of a rectangle from the keyboard and then
compute the area and the perimeter. 
Display length, width, area, and the perimeter. */

#include <iostream>
using namespace std; 

int main ()
{

double length, width, area, perimeter;

cout << "What are the dimensions of the rectangle?" << endl;
cout << "Length: " << endl;
cin >> length;
cout << "Width: " << endl;
cin >> width;

area = length * width;
perimeter = (length * 2) + (width * 2);

cout << "Length: " << length << endl;
cout << "Width: " << width << endl;
cout << "Area: " << area << endl;
cout << "Perimeter: " << perimeter << endl;

return 0;

}