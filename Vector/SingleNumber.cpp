// to find single number from repeated numbers of given vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={4 , 1, 2, 1 ,2};
    cout<<"Given vector values: ";
    for(int value : vec){
        cout<< value<<" " ;
    }
    cout<<endl;
    int ans =0;
    for(int value : vec){
        ans = ans^value; // xor bitwise operator is used here to cancel out the same number.
    }
    cout<<"Single number is : "<<ans<<endl;

    vector<int> vec2={52,68,25,52,98,74,74,25,68};
    cout<<"Size of Vector: "<<vec2.size()<<endl;
    cout<<"Given vector values: ";
    for(int value1 : vec2){
        cout<< value1<<" " ;
    }
    cout<<endl;
    int ans2 =0;
    for(int value1 : vec2){
        ans2 = ans2 ^ value1; 
    }
    cout<<"Single number is : "<<ans2;
}
