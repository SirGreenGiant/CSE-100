/*
Write a menu-driven C++ program that determines the pet tag fee. Your program should
do the following:
• Prompt the user to “Enter the pet type (cat or dog) : “.
• Ask the user "Has the pet been spayed or neutered (y/n)? "

cat, neuter yes = $4,
cat, neuter no = $8,
dog, neuter yes = $6,
dog, neuter n = $12
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main ()
{
// Variables 
string animal; 
char answer;

// Questions
cout << "Enter the pet type (cat or dog) : " << endl;
getline(cin, animal);
cout << "Has the pet been spayed or neutered (y/n)?" << endl;
cin >> answer; 

if (animal == "CAT" || animal == "CAt"|| animal == "CaT" || animal == "cAT" || animal == "Cat" || animal == "cAt" || animal == "caT" || animal == "cat")
    {
    if (answer == 'y' || answer == 'Y')
        {cout << "Pet Tag fee is $4.00" << endl;}
    else if (answer == 'n' || answer == 'N')
        {cout << "Pet Tag fee is $8.00" << endl;}
    else
        {
            cout << "Re-enter spayed or neutered (y/n): ";
            cin >> answer;
            
                if (answer == 'y' || answer == 'Y')
                    {cout << "Pet Tag fee is $4.00" << endl;}
                else if (answer == 'n' || answer == 'N')
                     {cout << "Pet Tag fee is $8.00" << endl;}
                else
                    {cout << "Invalid choice for Spayed or neutered!" << endl;}
        }
    }

else if ( animal == "DOG" || animal == "DOg" || animal == "DoG" || animal == "dOG" || animal == "Dog" || animal == "dOg" || animal == "doG" || animal == "dog")
    {
    if (answer == 'y' || answer == 'Y')
        {cout << "Pet Tag fee is $6.00" << endl;}
    else if (answer == 'n' || answer == 'N')
        {cout << "Pet Tag fee is $12.00" << endl;}
    else
        {
            cout << "Re-enter spayed or neutered (y/n): ";
            cin >> answer;
            
                if (answer == 'y' || answer == 'Y')
                    {cout << "Pet Tag fee is $6.00" << endl;}
                else if (answer == 'n' || answer == 'N')
                     {cout << "Pet Tag fee is $12.00" << endl;}
                else
                    {cout << "Invalid choice for Spayed or neutered!" << endl;}
        }
    }

else
{cout << "Only cats and dogs need pet tags!" << endl;}

return 0;

}