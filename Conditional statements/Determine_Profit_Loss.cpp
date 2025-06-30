//Take Selling and cost price as input from user and determine whether profit has made or loss or no profit no loss.
// And also determine how much profit or loss he incurred.
#include<iostream>
using namespace std;
int main(){
    int cp,sp,profit,loss;
    cout<<"Cost price: ";
    cin>>cp;
    cout<<"Selling price: ";
    cin>>sp;
    if(cp==sp){
        cout<<"No Profit or loss.";
    }
    else if(cp<sp){
        profit=sp-cp;
        cout<<"You got a profit."<<endl;
        cout<<"Profit of Rs.:"<<profit;
    }
    else{
        loss=cp-sp;
        cout<<"Yor are in loss."<<endl;
        cout<<"Loss of Rs.:"<<loss;
    }
}
