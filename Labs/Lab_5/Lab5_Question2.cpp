// Population Bar Graph Generator

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main ()
{
//Variables
int number, pop, star_number, star_output;
double initial_num;
string stars;


// Opening Message 
cout << "Enter the number of cities: ";
cin >> number;
int attempt_number = 1;
// Negative number checker
while (number < 0)
{
    attempt_number++;
    cout << "Invalid number of cities!" << " ";
    cin >> number;
    
    if (attempt_number == 3)
    {cout << "Too many invalid inputs. Exiting program." << endl; return 1;}
}
//Arrays
int cities[number];
int bar_graph[number];
string bar_graph_star[number];

// Population Input
for (int i = 0; i < number; i++)
{
    int attempt_population = 1;
    cout << "Enter the population for city " << i + 1 << ":" << endl;
    cin >> pop;
// Negative number checker
    while (pop < 0)
    {
        attempt_population++;
        cout << "Invalid population!" << endl;
        cout << "Enter the population for city " << i + 1 << ":" << endl;
        cin >> pop;
    
        if (attempt_population == 3)
        {cout << "Too many invalid inputs. Exiting program." << endl; return 1;}
    }
// Putting the correct number in the array
    cities[i] = pop;
}
// Bar Graph Generation
for (int i = 0; i < number; i++)
{   
    initial_num = static_cast<double>(cities[i])/1000;
    star_number = ceil(initial_num);
    star_number = static_cast<int>(star_number);
    
    if (cities[i] > 0 && cities[i] < 1000)
    {star_number = 1;}
    
    bar_graph[i] = star_number;

    star_output = bar_graph[i];
    while (star_output > 0)
        {stars = stars + "*"; 
        star_output--;}
    bar_graph_star[i] = stars;
}
// Final Output
cout << endl;
cout << "City    Population Bar Graph" << endl;
cout << "---------------------------------" << endl;

for (int i = 0; i < number; i++)
{cout << " " << i + 1 << "\t " << bar_graph_star[i] << endl;}

return 0;
}