// Take 3 positive integers input and print greatest of them
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter three numbers:" << endl;
    cin >> num1 >> num2 >> num3;
    if ((num1 > num2) && (num1 > num3))
        cout << num1 << "is greatest.";
    else if ((num2 > num1) && (num2 > num3))
        cout << num2 << "is greatest.";
    else
    {
        cout << num3 << "is greatest.";
    }
}

// Take 3 positive integers input and print least of them
/*#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter three numbers:"<<endl;
    cin>>num1>>num2>>num3;
    if((num1<num2)&&(num1<num3))
    cout<<num1  <<" is least.";
   else if((num2<num1)&&(num2<num3))
        cout<<num2 <<" is least.";
        else{
            cout<<num3 <<" is least.";
        }

}*/