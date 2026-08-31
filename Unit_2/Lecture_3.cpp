/* Write a program to determine the income tax of a given person. Your program
should prompt the user to enter name (first and last name) and the annual income.
If annual income is less than $50000, tax rate is 33%. Otherwise the tax rate is
38%. Based on this information, calculate the tax and display the tax information */

#include <iostream>
#include <string>
using namespace std;

int main ()
{
string name;
double income;

cout << "Please enter your name: " << endl;
getline (cin, name);
cout << "Please entre your annual income: " << endl;
cin >> income;
cout << endl;
// Determining tax rate 

if (income < 50000)
{
cout << "\t \t" << name << " : Tax Report" << endl;
cout << "\t     ----------------------------------" << endl;
cout << endl;
cout << "Income : $" << income << endl;
cout << "Tax : 33%" << endl;
}
else 
{
cout << "\t \t" << name << " : Tax Report" << endl;
cout << "\t     ----------------------------------" << endl;
cout << endl;
cout << "Income : $" << income << endl;
cout << "Tax : 38%" << endl;
}

return 0;
}

 

