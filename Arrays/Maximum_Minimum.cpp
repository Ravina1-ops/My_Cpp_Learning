#include <iostream>
using namespace std;
int main()
{
    int n, A[10];
    cout << "Enter no of elements: ";
    cin >> n;
    cout << "Enter array elements: ";
    for (int j = 0; j < n; j++)
    {
        cin >> A[j];
    }
    int min = A[0];
    int max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << "Minimum Element is " << min << endl;
    cout << "Maximum Element is " << max;
}