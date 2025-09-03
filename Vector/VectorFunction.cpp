// Insert and delete elements form vector using push back and pop back functions 
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {63};
    cout << "Size of Vector: " << vec.size() << endl;
    for (int value : vec)
    {
        cout << "Value befor push: " << value << endl;
    }
cout<<endl;
    // To insert element in vector push back function is used.
    vec.push_back(45);
    vec.push_back(25);
    vec.push_back(48);
    vec.push_back(32);
    cout << "Size after push back: " << vec.size() << endl;
    for (int value : vec)
    {
        cout << "Values after push: " << value << endl;
    }
    cout<<endl;
    // To delete last element from vector pop back function is used.
    vec.pop_back();
    cout << "Size after pop back: " << vec.size() << endl;
    for (int value : vec)
    {
        cout << "Values after pop: " << value << endl;
    }
}