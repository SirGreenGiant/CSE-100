// Business Sales Analysis 

#include <iostream>
#include<iomanip>
using namespace std;
int main ()
{
// Arrays 
int stores[10];
double sales[10];
// Variables
int highest_store = 0, lowest_store = 0;
double highest_sell = 0, lowest_sell = 0, sale, total;

cout << fixed << setprecision(2);

// Data Collection
for (int i = 0; i < 10; i++)
{
double sales_store_entry;
bool valid_store = false;


// Error Checker
for (int attempt = 1; attempt <= 3; attempt++)
{
    cout << "Enter the sales for store " << i << " : ";
    cin >> sales_store_entry;

    if (sales_store_entry >= 0)
    {valid_store = true; break;}

    cout << "Invalid sale amount! Please enter a non-negative number. " << "Attempt " << attempt << " of 3." << endl;
}
if (!valid_store)
    {   cout << "Too many invalid attempts. Sale for store " << i << " set to 0." << endl;
        sales_store_entry = 0;    }

sales[i] = sales_store_entry;
}

////////////////////////////////////////////////////////////////////////////////

// Computation
// Finding the highest selling store 
for (int i = 0; i < 10; i++)
{
    if (sales[i] > highest_sell)
    {
    highest_sell = sales[i];
    highest_store = i;
    }
    else 
    {continue;}
}

// Finding the lowest selling store 
for (int i = 0; i < 10; i++)
{
    if (i == 0)
    {
    lowest_sell = sales[i];
    lowest_store = i;
    }
    if (sales [i] < sales[i-1])
    {
    lowest_sell = sales[i];
    lowest_store = i;
    }
    else 
    {continue;}
}

// Averaging all of the stores sales 
for (int i = 0; i < 10; i++)
{
sale = sales[i];
total += sale;
}
double average_sale;
average_sale = total / 10.0;

////////////////////////////////////////////////////////////////////////////////

// Final Output 
cout << endl;
cout << "Highest Sale: " << highest_sell << " at Store " << highest_store << endl;
cout << "Lowest Sale: " << lowest_sell << " at Store " << lowest_store << endl;
cout << "Average Sale: " << average_sale << endl;

return 0;
}
