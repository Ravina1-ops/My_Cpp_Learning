//Take positive no. and  check it is three digit no or not  
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no.: ";
    cin>>n;
    if(n>99 && n<1000)
    cout<<"Yes it is a three digit no.";
    else{
        cout<<"No it is not a three digit no.";
    }
}