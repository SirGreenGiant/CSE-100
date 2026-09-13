/*Write a while loop that read integers from the
keyboard and add them together until user
enter -999 (-999 is the terminating condition).*/

#include <iostream>
using namespace std;

int main ()
{
int number, total=0;

while (total > -999)
    {
        cout << "Enter a Number : " << endl;
        cin >> number ;
        total -= number;
        
    }
cout << "You have reached your total limit " << total << endl;

return 0;
}