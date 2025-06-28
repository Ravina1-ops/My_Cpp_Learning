#include<iostream>
using namespace std;
int main(){

    /*Area of circle*/

//  float radi;
//     cout<<"Enter Radius of Circle: ";
//     cin>>radi;
//    float area = 3.14*radi*radi;
//    cout<<"Area of Circle: "<<area;

/*Find simple interest*/

// float time,rate,princ,si;
// cout<<"Enter Principle amount: ";
// cin>>princ;
// cout<<"Enter time: ";
// cin>>time;
// cout<<"Rate: ";
// cin>>rate;
// si=(princ*rate*time)/100;
// cout<<"Simple interest: "<<si;

/*Find volume of sphere*/

float r,vol;
cout<<"Enter radius of sphere: ";
cin>>r;
vol = (4*3.14*r*r*r)/3;
cout<<"Volume of sphere: "<<vol;
}

/* Modulus operator some important points 
1 a % b = a if(a<b)
2 a % a = 0
3 a % -b = a % b 
4 -a % b = a % b
*/