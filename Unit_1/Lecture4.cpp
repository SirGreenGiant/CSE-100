/* Write a C++ program that computes the wage of a person if 
the number of hours worked is 10
and the hourly rate is 7.5 dollars*/

#include <iostream>
using namespace std;
int main() 
{
    int hoursWorked = 10;

    double payRate = 7.5;

    cout << "Your wages for this week are: " << hoursWorked * payRate <<endl;

    return 0;
}
