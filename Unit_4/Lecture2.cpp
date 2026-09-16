//Lottery Array Practice 

#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
// Variables 
int match;
const int SIZE = 5;
//Arrays
int user[5];
int lotto[5];

cout << "Please enter your 5 numbers (only using numbers 1-9): ";
for (int i = 0; i < SIZE; i++)
{cin >> user[i];}

// Lotto Number Generation
for (int i = 0; i < SIZE; i++)
{ lotto[i] = rand() % 10 + 1;}
// If you want set numbers for the lotto, comment out the previous two lines and uncomment the next line
//lotto[5] = {1,2,3,4,5};


// Checking the Numebers 
for (int i = 0; i < SIZE; i++)
{
    if (user[i] == lotto[i])
        {match++;}
}
if (match == 5)
{cout << "Congratulations!!!" << endl;}
else 
{cout << "Bummer :( \t Better luck next time." << endl;}

return 0;
}