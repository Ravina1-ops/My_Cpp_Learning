//by using if else
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1;
    char op;
    cin>>op;
    cin>>n2;
    if(op=='+') cout<<n1+n2;
    if(op=='-') cout<<n1-n2;
    if(op=='*') cout<<n1*n2;
    if(op=='/') cout<<n1/n2;

}

// By switch statement
/*#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1;
    char op;
    cin>>op;
    cin>>n2;
    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
     case '-':
        cout<<n1-n2<<endl;
         break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    default:
        cout<<"Invalid operator";
}
}*/