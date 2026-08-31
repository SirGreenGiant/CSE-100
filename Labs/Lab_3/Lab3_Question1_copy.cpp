// Question 1: Write a menu-driven C++ program that finds and displays areas of 3 different objects.

#include <iostream>
using namespace std;

int main ()
{
// Variables
int choice;
double side, radius, area;

// Menu
cout << "Enter choice of object based on the following menu: " << endl;
cout << "\t\t1 -- Square" << endl;
cout << "\t\t2 -- Circle" << endl;
cout << "\t\t3 -- Right Triangle" << endl;
cin >> choice;

// If-else to determine if the shape has a side or a radius 
if (choice == 1)
{
    cout << "Enter the side for a Square:" << endl;
    cin >> side;
}
else if (choice == 2)
{
    cout << "Enter the radius for a Circle:" << endl;
    cin >> radius;
}
else if (choice == 3)
{
    cout << "Enter the side for a Right Triangle:" << endl;
    cin >> side;
}


// Switch will determine the equation and the output
switch (choice)
{
    case 1 : 
        area = side * side;
        cout << "Area of the Square is " << area << endl;
        break;
    case 2 : 
        area = 0.5 * 3.14 * radius * radius;
        cout << "Area of the Circle is " << area << endl;
        break;
    case 3 : 
        area = 0.5 * side * side;
        cout << "Area of the Right Triangle is " << area << endl;
        break;
    default : 
        cout << "Invalid Choice of Object!" << endl;

}
return 0;

}