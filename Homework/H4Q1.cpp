#include <iostream>
using namespace std;

int main() 
{
int sum, i;
i = 0;
while (i < 10) {
cout << i << ' ';
i +=2;
}
cout << "\nAfter loop i = " << i << endl << endl;

i = 4;
while (i >= 0)
cout << i-- << ' ';
cout << "\nAfter loop i = " << i << endl << endl;

return 0;
}