//Display the ap 1,3,5,7,9.. upto n terms by ap formula

#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter term : ";
    cin>>n;
    for(i=1;i<=2*n-1;i=i+2)
    {
        cout<<i<<" ";
    }
}

//print this ap 4,7,10,13,16 by extra variable

/*#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter term : ";
    cin>>n;
    int a=4;
    for(i=1;i<=n;i++)
    {
        cout<<a<<" ";
        a = a + 3;
    }
}*/