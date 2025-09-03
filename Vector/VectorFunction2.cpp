#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<float> vec={25.54,47.5,0.85,6.3};
     cout<<"Size of vector: "<<vec.size()<<endl;//  funtion for size of vector
    for(float value : vec){
        cout<<"Value of vector is : "<<value<<endl;
    }
   cout<<endl;
    cout<<"Front value of vector: "<<vec.front()<<endl;// front  function is used to print 1st value of vector
    cout<<"Last Value of vector: "<<vec.back()<<endl;// back function is used to print last value of vector
    cout<<"Value at index 2 is: "<<vec.at(2)<<endl;// at function is used to print the value of any index in vector
    
}