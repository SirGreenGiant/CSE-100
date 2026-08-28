/* 
Write a C++ program that determines the number of brownies that will fit in a baking
pan of a specified size
- Prompt the user to enter the length and width (in inches) of a baking pan
- Compute the surface area of the bottom of the pan.
- Compute how many small brownies the pan will hold if each one is cut with a 1”x1” square
bottom.
- Compute how many big brownies the pan will hold if each one is cut with a 2”x2” square
bottom.
- Display, with appropriate labels, the pan dimensions, the number of small brownies, and the
number of large brownies the pan can hold.
*/

# include <iostream>
using namespace std;

int main ()
{
int length, width, area, smallBrownies, bigBrownies;

// User Input
cout << "Enter the length of the baking pan (in inches): ";
cin >> length;
cout << "Enter the width of the baking pan (in inches): " ;
cin >> width;

// Compute Area
area = length * width;

// Number of Brownies 
smallBrownies = area;
bigBrownies = area / 4;

// Final Output
cout << "A " << length << " X " << width << " inch pan can hold " << smallBrownies << " small brownies or " << bigBrownies << " large brownies." <<endl;

return 0;
}