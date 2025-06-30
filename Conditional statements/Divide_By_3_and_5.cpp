// Take input no. and tell if it is divisible by 5 and 3 both.
/*-#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no.: ";
    cin>>n;
    if(n%3==0 and n%5==0) // also write if(n%15==0) result is same 
    cout<<"Yes this is divisible by 3 and 5 both.";
   else{
    cout<<"No this is not divisible by 3 and 5.";
}
}*/

// Take input no. and tell if it is divisible by 5 or 3.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no.: ";
    cin>>n;
    if(n%3==0 or n%5==0) 
    cout<<"Yes this is divisible by 5 or 3";
   else{
    cout<<"No this is not divisible either by 5 or 3";
}
}