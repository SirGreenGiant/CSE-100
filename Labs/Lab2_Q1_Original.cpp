/* Write a C++ program to compute the ideal weight for both males and females.
The ideal weight for a female is 100 pounds plus 5 pounds for each inch in height over 5 feet.
The ideal weight for a male is 106 pounds plus 6 pounds for each inch in height over 5 feet. */

/* NOTE: I have previous python knowledge and have an understanding of if else statements.
I thought those would apply well here and wanted to try them out in C++ */


#include <iostream> 
using namespace std;

int main()
{

int feet, inches, height;

cout << "\t \t Welcome to the ideal weight calculator!" << endl;
cout << "Please enter your height" << endl;
cout << "Feet: " << endl;
cin >> feet; 
cout << "Inches: " << endl;
cin >> inches;

// Converting height into inches
height = (feet * 12) + (inches);

// Calculating Ideal Weight
if (height < 60)
{
cout << "Based on your height:" << endl;
cout << "Ideal male weight   - 106 lbs" << endl;
cout << "Ideal female weight - 100 lbs" << endl;
}
else
{
int idw_male, idw_female;

idw_male = 106 + ((height - 60) * 6);
idw_female = 100 + ((height - 60) * 5);

cout << "Based on your height:" << endl;
cout << "Ideal male weight   - " << idw_male << " lbs" << endl;
cout << "Ideal female weight - " << idw_female << " lbs"<< endl;
}

return 0;

}

