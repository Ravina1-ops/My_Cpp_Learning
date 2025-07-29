// If the ages of Ram shyam and ajay are input by user determine the youngest of three
#include <iostream>
using namespace std;
int main()
{
    int ram, shm, ajy;
    cout << "Enter Ram's age: ";
    cin >> ram;
    cout << "Enter Shyam's age: ";
    cin >> shm;
    cout << "Enter Ajay's age: ";
    cin >> ajy;
    if (ram < shm)
    {
        if (ram < ajy)
        {
            cout << "Ram is Younger than Shyam and Ajay";
        }
        else
        {
            cout << "Ajay is Younger than Shyam and Ram.";
        }
    }
    else
    {
        if (shm < ajy)
            cout << "Shyam is Younger than Ram and Ajay.";
        else
        {
            cout << "Ajay is Younger than Shyam and Ram.";
        }
    }
}