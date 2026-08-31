/* Activities at Lake LazyDays program: As activity directory at Lake LazyDays Resort, it is
your job to suggest appropriate activities to guests based on the weather:
temp >= 80: swimming
60 <= temp < 80: tennis
40 <= temp < 60: golf
temp < 40: skiing
Write a C++ program that prompts the user for a temperature, then prints out the activity
appropriate for that temperature */

#include <iostream>
using namespace std;

int main()
{
int temp;

cout << "\t Welcome to Lake LazyDays \n \n";
cout << "What is the temperature outside? \n";
cin >> temp;

// Activities based on temperature 
if (temp < 40)
{cout << "Your activity for today should be Skiing" << endl;}

else if ((temp >= 40) && (temp < 60))
{cout << "Your activity for today should be Golf" << endl;}

else if ((temp >= 60) && (temp < 80))
{cout << "Your activity for today should be Tennis" << endl;}

else 
{cout << "Your activity for today should be Swimming" << endl;}

return 0;
}