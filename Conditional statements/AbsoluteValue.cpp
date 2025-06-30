// Tke input from user and print the absolute value of that no.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no.: ";
    cin>>n;
    // if(n<0){
    //     n=n*-1;
    //     cout<<"Absolute value is "<<n;
    // }
    // else{
    //     cout<<"Absolute value is "<<n;}

    // 2nd method if you want to change n into its absolute value
    if(n<0) n = -n;
    cout<<n;
    
}