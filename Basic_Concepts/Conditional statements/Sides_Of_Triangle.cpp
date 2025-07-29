// Take 3 no input and tell if they can be sides of a triangle.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter all Sides of triangle: ";
    cin >> a >> b >> c;
    if (((a + b) > c) && ((b + c) > a) && ((a + c) > b))
        cout << "yes these are side of a triangle";
    else
    {
        cout << "No these are not sides of triangle.";
    }
}