/* Write a C++ program that reads the first name
and last name of person and generate a
temporary password by taking first three letters
of the first name and the first letter of the last
name */

#include <iostream>
#include <string>
using namespace std; 

int main ()
{

string firstName;
string lastName;
string tempPass;

//Getting their name 
cout << "Type your first name : " << endl;
getline(cin,firstName);

cout << "Type your last name : " << endl;
getline(cin,lastName);


//Create the Password
tempPass = firstName.substr(0,3) + lastName[0];
cout << "Your temporary password is : " << tempPass << endl;

return 0;
}