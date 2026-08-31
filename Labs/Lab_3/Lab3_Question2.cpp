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
int fee; 

// Questions
cout << "Enter the pet type (cat or dog) : " << endl;
getline(cin, animal);
cout << "Has the pet been spayed or neutered (y/n)?" << endl;
cin >> answer; 

if (animal = cat)
{
    switch (answer)
    {
        case 'y' :
            cout << "Pet Tag fee is $4.00" << endl;
        case 'n' :
            cout << "Pet Tag fee is $8.00" << endl;
        default  :
            cout << "Invalid choice for Spayed or neutered!" << endl;
    }
}

else if (animal = dog)
{
    switch (answer)
    {
        case 'y' :
            cout << "Pet Tag fee is $6.00" << endl;
        case 'n' :
            cout << "Pet Tag fee is $12.00" << endl;
        default  :
            cout << "Invalid choice for Spayed or neutered!" << endl;
    }
}

else
{
    cout << "Only cats and dogs need pet tags!" << endl;
}

return 0;

}