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
cout << "\t1 -- Square" << endl;
cout << "\t2 -- Circle" << endl;
cout << "\t3 -- Right Triangle" << endl;
cin >> choice;


// Switch will determine the equation and the output
switch (choice)
{
    case 1 : 
        cout << "Enter the side for a Square:" << endl;
        cin >> side;
            if (side <= 0)
            {cout << "Incorrect Value!" << endl;}
            else {
        area = side * side;
        cout << "Area of the Square is " << area << endl;}
        break;
    case 2 : 
        cout << "Enter the radius for a Circle:" << endl;
        cin >> radius;
            if (radius <= 0)
            {cout << "Incorrect Value!" << endl;}
            else {
        area = 0.5 * 3.14 * radius * radius;
        cout << fixed << showpoint << setprecision(4);
        cout << "Area of the Circle is " << area << endl;}
        break;
    case 3 : 
        cout << "Enter the side for a Right Triangle:" << endl;
        cin >> side;
            if (side <= 0)
            {cout << "Incorrect Value!" << endl;}
            else {
        area = 0.5 * side * side;
        cout << "Area of the Right Triangle is " << area << endl;}
        break;
    default : 
        cout << "Invalid Choice of Object!" << endl;
}

/* 
I had trouble getting the if else statement to work outside of the switch.
My goal was for any negative or zero that was put in for the side or radius to output 
incorrect Value and for the program to kick back to the switch section. 
This is functional code, theres better ways out there, but functional nonetheless.
*/

return 0;

}