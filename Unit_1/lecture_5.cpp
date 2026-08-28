/*Write a C++ program that computes the wage of a
person. Number of hours worked and the hourly rate
should be read from the keyboard.*/

#include <iostream>
using namespace std;
int main()
{
int  hours_worked; 
double hourly_rate, wage;

cout << "How many hours did you work and what is your hourly rate?" << endl;

cin >> hours_worked;
cin >> hourly_rate;

wage = hours_worked * hourly_rate;

cout << "Your wage is : " << wage << endl;

return 0;
}