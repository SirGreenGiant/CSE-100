/*
Write a C++ program that plays the game of Mad Lib. Your program should do the
following:

- Prompt the user to input the following: “Name of the instructor”, “Name of the student”,
“Choice of food”, “A number between 100 and 110”, “An adjective”, “A color”, “An animal”

- After receiving all the data, the program should substitute into the story below and output to
the console.

Dear Instructor [Instructor Name],
I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten [Food], which
made me turn [Color] and extremely ill. I come down with a fever of [Number 100 – 120]. Next, my
[Adjective] pet [Animal] must have smelled the remains of the [Food] on my homework, because he
ate it. I am currently rewriting my homework and hope you will accept it here.
Sincerely,
[Student’s name]

*/

#include <iostream>
#include <string>
using namespace std;

int main ()
{

string instructor, student, food, number, adjective, color, animal;

//Madlibs typically have a name so im going to name mine 
cout << "\t \t MadLibs : The Homework Excuse" << endl;
cout << endl;

// Questions
cout << "Name of the instructor : ";
getline(cin,instructor);

cout << "Name of the student : ";
getline(cin,student);

cout << "Choice of food : " ;
getline(cin,food);

cout << "A number between 100 and 110 : " ;
getline(cin,number);

cout << "An adjective : " ;
getline(cin,adjective);

cout << "A color : " ;
getline(cin,color);

cout << "An animal : " ;
getline(cin,animal);
cout << endl;

// MadLib Output
cout << "Dear Instructor " << instructor << "," << endl;
cout << endl;
cout << "I am sorry that I am unable to turn in my homework at this time. " << endl;
cout << "First, I ate a rotten " << food << ", which made me turn " << color << " and extremely ill. " << endl;
cout << "I came down with a fever of " << number << ". " << endl;
cout << "Next, my " << adjective << " pet " << animal << " must have smelled the remains of the " << food << " on my homework, because he ate it. " << endl;
cout << "I am currently rewriting my homework and hope you will accept it here." << endl; 
cout << endl;
cout << "Sincerely," << endl;
cout << student << endl;


return 0;

}