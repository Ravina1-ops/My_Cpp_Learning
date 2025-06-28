//1. to acess your name and print hello <your name>
   /*#include<iostream>
using namespace std;
int main(){
   string name;
    cout<<"Your name please : ";
    cin>>name;
    cout<<"Oh! Hello "<<name<<".\nNice to Meet You.";
    }*/

 //2. input two no. and do addition, multiplication, subtraction, division.
   /* #include<iostream>
    using namespace std;
    int main(){
        int a,b,sum,mul,sub,div,mod;
        cout<<"Enter Your 1st number: ";
        cin>>a;
        cout<<"Enter Your 2nd Number: ";
        cin>>b;
        sum=a+b; mul=a*b; sub=a-b; div=a/b; mod=a%b;
        cout<<"Mathematical operations of above numbers\nSum: "<<sum<<"\nSubtraction: "<<sub<<"\nMultiplication: "<<mul<<"\nDivision: "<<div<<"\nModulus: "<<mod<<"";
    }*/

//3. swapping two no. without using third variable
   /* #include<iostream>
    using namespace std;
    int main(){
        int a,b;
        cout<<"Enter 1st no.: ";
        cin>>a;
        cout<<"Enter 2nd no.: ";
        cin>>b;
        cout<<"Before swapping: "<<a<<" "<<b;
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<"\nAfter swapping: "<<a<<" "<<b;
    }*/

 //4. check whether no. is even or odd
   /* #include<iostream>
    using namespace std;
    int main(){
        int a;
        cout<<"Enter any no.: ";
        cin>>a;
        if(a%2==0){
            cout<<"No. is even";}
            else{
cout<<"No. is odd";
            }
    }*/

//5. Avergae marks of 4 subjects.
   /*#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3,s4,avg;
    cout<<"Enter marks of 4 Subjects: ";
    cin>>s1>>s2>>s3>>s4;
    avg= (s1+s2+s3+s4)/4;
    cout<<"Average marks: "<<avg;
}*/

//6. temperature in celsius input and given output in fahrenheit.
#include<iostream>
using namespace std;
int main(){
    int temp;
    cout<<"Enter temperature in celsius: ";
    cin>>temp;
    float f=(temp*9/5)+32;
    cout<<"Temperature in Fahrenheit: "<<f;
}

