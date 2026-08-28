/* Write a C++ program to compute the ideal weight for both males and females.
The ideal weight for a female is 100 pounds plus 5 pounds for each inch in height over 5 feet.
The ideal weight for a male is 106 pounds plus 6 pounds for each inch in height over 5 feet. */

/* NOTE: I have previous python knowledge and have an understanding of if else statements.
I thought those would apply well here and wanted to try them out in C++ */


#include <iostream> 
#include <string>
using namespace std;

int main()
{

int feet, inches, height, idw_male, idw_female;


cout << "\t Welcome to Ideal Weight Calculation Program" << endl;
cout << endl;
cout << "Please enter your height, feet followed by inches (eg; 5 3): ";
cin >> feet >> inches;
cout << endl;


// Converting height into inches
height = (feet * 12) + (inches);

// Calculating Ideal Weight
if (height < 60)
{
cout << "If you are a male, your ideal weight should be 106 pounds." << endl;
cout << endl;
cout << "If you are a female, your ideal weight should be 100 pounds." << endl;
}
else
{
idw_male = 106 + ((height - 60) * 6);
idw_female = 100 + ((height - 60) * 5);

cout << "If you are a male, your ideal weight should be " << idw_male << " pounds." << endl;
cout << endl;
cout << "If you are a female, your ideal weight should be " << idw_female << " pounds."<< endl;
}

return 0;

}

