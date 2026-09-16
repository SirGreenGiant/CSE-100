#include <iostream>
using namespace std;

int main()
{
//Variables 
bool end = false;
int person, coffee, tea, coke, oj, choice, attempt, invalid, total;

// Variable Tracker
person = 0;
coffee = 0;
tea = 0;
coke = 0;
oj = 0;
invalid = 0;

// Opening Text and Menu
cout << "\t\tWelcome to the favorite beverage survey!" << endl;
cout << "Please choose an option from the list below:" << endl;
cout << "\t 1) Coffee" << endl;
cout << "\t 2) Tea" << endl;
cout << "\t 3) Coke" << endl;
cout << "\t 4) Orange Juice" << endl;
cout << endl;


do
{
// New Person 
attempt = 1;
person++;
// Options Input Message 
cout << "Please input the favorite beverage of person #" << person << ": Choose 1, 2, 3, or 4 from the above menu or -1 to exit the program" << endl;
cin >> choice;

// Invalid Input Attempt Loop
if (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != -1)
{
    while (attempt < 3)
    {
        cout << "Invalid choice! Attempt " << attempt << " of 3." << endl;
        cout << "Please input the favorite beverage of person #" << person << ": Choose 1, 2, 3, or 4 from the above menu or -1 to exit the program" << endl;
        cin >> choice;
        attempt++;


        if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == -1)
            {break;}
    
    }
    if (attempt == 3)
    {   cout << "Invalid choice! Attempt " << attempt << " of 3." << endl;
        cout << "Too many invalid attempts. Moving to next person." << endl;
        invalid++;
        continue;}
}

switch (choice)
{
case 1 : coffee++; break;
case 2 : tea++; break;
case 3 : coke++; break;
case 4 : oj++; break;
case -1 : end = true; invalid++; break;
}

} while (end != true);

total = person - invalid;
// Final Output 
cout << "The total number of people surveyed is " << total << "." << endl;
cout << "The results are as follows:" << endl;
cout <<"Beverage\tNumber of Votes" << endl;
cout <<"********************************" << endl;
cout << "Coffee\t\t" << coffee << endl;
cout << "Tea\t\t" << tea << endl;
cout << "Coke\t\t" << coke << endl;
cout << "Orange Juice\t" << oj << endl;

return 0;
}