/* Write a C++ program that asks the user’s
weight (in pounds) and display the equivalent
weight in kilograms (check point question 3.8,
page 81). Kilograms = pounds/2.2 */

#include <iostream>
using namespace std; 

int main ()
{

double weight, kg;

cout << "What is your weight in pounds?" << endl;
cin >> weight;

kg = weight/2.2;

cout << "Weight in pounds: " << weight << endl;
cout << "Weight in kilograms: " << kg << endl;

return 0;
}