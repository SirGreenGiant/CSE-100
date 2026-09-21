
#include <iostream>
using namespace std;

int main() 
{

int LIMIT;
int count = 1;

cout << "How many times do you want to output I Love Computer Science? : ";
cin >> LIMIT;

while (count <= LIMIT)
{
cout << count << ") I Love Computer Science" << endl;
count++;
}

return 0;
}