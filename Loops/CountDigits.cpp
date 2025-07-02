#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count = 0;
    while(n!=0){
        n=n/10;
        count++;
    }
    cout<<count <<" Digit number.";
}

// print the sum of digits
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int rem,sum=0;
    while(n!=0){
        rem=n%10;
        n=n/10;
        sum+= rem;
    }
    cout<<"Sum of digits is " <<sum ;
}*/