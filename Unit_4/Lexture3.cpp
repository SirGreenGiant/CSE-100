//City Name and Population Array 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
// Variables 
string cityName;
int Pop;
// Vectors 
vector<string> cities;
vector<int> population;

// Asking for Cities 
cout << "Please list 5 Cities: " << endl;
for (int i = 0, i < 5, i++)
{
    getline(cin,cityName);
    cities.push_back(cityName);
}

// Asking for Population
cout << "Please enter their populaitons: " << endl;
for (int i = 0, i < 5, i++)
{
    cin >> Pop;
    population.push_back(Pop);
}

//Determining City w/ Greatest Population


return 0;
}