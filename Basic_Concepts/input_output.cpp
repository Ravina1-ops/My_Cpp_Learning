// Input by user

/*#include <iostream>
using namespace std;
int main(){
    int apples;
    cin>>apples ;
    cout<<"No of apples "<<apples;
    return 0; 

}*/

// Sum of two numbers 

/*#include<iostream>
using namespace std;
int main(){
    int a , b,sum;
    cout<<"Enter No. 1st = ";
    cin>>a;
    cout<<"Enter no. 2nd = ";
    cin>>b;
    sum= a+b;
    cout<<"Sum of two no. = "<<sum;
}*/

// swapping of two numbers using third variable
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Numbers before swapping: "<<a<<" "<<b ;// <<" " is use for spacing in output 
c=a;
a=b;b=c;
cout<<"\nNumbers after swapping: "<<a<<" "<<b;
}