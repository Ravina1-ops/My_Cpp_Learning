#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter term : ";
    cin>>n;
    int a=1;
    for(i=1;i<=n;i++)
    {
        cout<<a<<" ";
        a = a *  2;
    }
}