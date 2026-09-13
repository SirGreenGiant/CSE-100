// PHONE BILL GENERATION SOFTWARE 

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

int main ()
{
// Title Card 
cout << "==========================================" << endl;
cout << "\t\tPhone Bill Generation Software" << endl;
cout << "==========================================" << endl;
cout << endl;

// Variables 
char customerType, repeat;
string phoneNumber;
int minutes, attempts;
double stage1, stage2, totalCost;
bool section1, section2, section3;

cout << fixed << setprecision(2);
/* These Sections determine if the code needs to repeat (triggering the while loops)
Section 1 : Initial question, determines if answer to regular or business question is correct or needs to be rerun 
Section 2 : Determines if minutes are non-negative
Section 3 : Determines if the program runs again
*/

do
{
section1 = false;
section2 = false;
section3 = false;

// Section 1 : Customer Type
cout << "Please Enter the Customer Type (R for Regular, B for Business): ";
cin >> customerType;
customerType = tolower(customerType);

//Section 1 Check
if (customerType == 'r' || customerType == 'b')
{section1 = true;}


// Resetting the attempts counter 
attempts = 0;
// 3 attempts : Section 1
while (section1 != true)
{
    cout << "Invalid customer type! Please enter R, r for regular and B, b for business customers ";
    cin >> customerType;
    customerType = tolower(customerType);
    attempts++;

    if (customerType == 'r' || customerType == 'b')
        {section1 = true;}
    if (attempts == 3)
        {break;}
}
if (attempts == 3)
{break;}


// Regular Customer
if (customerType == 'r')
{
    //Section 2 : Phone Number and Minutes
    cout << "Please Enter the Customer Phone Number: ";
    cin >> phoneNumber;
    cout << "Enter the phone usage in minutes: ";
    cin >> minutes;
    
    // Section 2 Check
        if (minutes > 0)
            {section2 = true;}
    // Resetting the attempts counter 
        attempts = 0;
    // 3 attempts : Section 2
        while (section2 != true)
        {
            cout << "Minutes cannot be negative! Please enter the phone usage in minutes: ";
            cin >> minutes;
            attempts++;

            if (minutes > 0)
                {section2 = true;}
            if (attempts == 3)
                {break;}
        }
        if (attempts == 3)
            {break;}
        
    //Generating Total
        if (minutes <= 200)
        {
            stage1 = 0;
            stage2 = 0;
            totalCost = 29.99;
        }
        else if (minutes > 200 && minutes <= 450)
        {
            stage1 = (minutes - 200) * 0.55;
            stage2 = 0;
            totalCost = 29.99 + stage1;
        }
        else
        {
            stage1 = 250 * 0.55;
            stage2 = (minutes - 450) * 0.88;
            totalCost = 29.99 + stage1 + stage2;
        }

    //OUTPUT : Generating the bill
    cout << "\t\tPhone Bill for: " << phoneNumber << endl;
    cout << "\t\t============================" << endl;
    cout << "Total Minutes Used: " << minutes << endl;
    cout << "Monthly base Payment: $29.99" << endl;
    cout << "Stage 1 Cost: $" << stage1 << endl;
    cout << "Stage 2 Cost: $" << stage2 << endl;
    cout << "---------------------------------" << endl;
    cout << "Total Cost: $" << totalCost << endl;
    cout << endl;

}
else if (customerType == 'b')
{
    //Section 2 : Phone Number and Minutes
    cout << "Please Enter the Customer Phone Number: ";
    cin >> phoneNumber;
    cout << "Enter the phone usage in minutes: ";
    cin >> minutes;
    
    // Section 2 Check
        if (minutes > 0)
            {section2 = true;}
    // Resetting the attempts counter 
        attempts = 0;
    // 3 attempts : Section 2
        while (section2 != true)
        {
            cout << "Minutes cannot be negative! Please enter the phone usage in minutes: ";
            cin >> minutes;
            attempts++;

            if (minutes > 0)
                {section2 = true;}
            if (attempts == 3)
                {break;}
        }
        if (attempts == 3)
            {break;}
        
    //Generating Total
        if (minutes <= 600)
        {
            stage1 = 0;
            stage2 = 0;
            totalCost = 99.99;
        }
        else if (minutes > 600 && minutes <= 700)
        {
            stage1 = (minutes - 600) * 0.45;
            stage2 = 0;
            totalCost = 99.99 + stage1;
        }
        else
        {
            stage1 = 100 * 0.45;
            stage2 = (minutes - 700) * 0.99;
            totalCost = 99.99 + stage1 + stage2;
        }

    //OUTPUT : Generating the bill
    cout << "\t\tPhone Bill for: " << phoneNumber << endl;
    cout << "\t\t============================" << endl;
    cout << "Total Minutes Used: " << minutes << endl;
    cout << "Monthly base Payment: $99.99" << endl;
    cout << "Stage 1 Cost: $" << stage1 << endl;
    cout << "Stage 2 Cost: $" << stage2 << endl;
    cout << "---------------------------------" << endl;
    cout << "Total Cost: $" << totalCost << endl;
    cout << endl;

}



// Asks if there is another bill
cout << "More Bills? [Y/N]: " << endl;
cin >> repeat;
repeat = tolower(repeat);
if (repeat == 'n')
{section3 = true;}
else if (repeat == 'y')
{section3 = false;}

else 
{
// Resetting the attempts counter 
    attempts = 0;
// 3 attempts : Section 3
    while (repeat != 'y' && repeat != 'n')
        {
            cout << "Incorrect choice! If you want to generate another bill, enter y or Y. If not, enter n or N. ";
            cin >> repeat;
            attempts++;

            if (repeat == 'n')
                {section3 = true;}
            if (attempts == 3)
                {break;}
        }
        if (attempts == 3)
            {break;}

    }
}
while (section3 != true);

cout << "Exiting the program ........." << endl;

return 0;
}