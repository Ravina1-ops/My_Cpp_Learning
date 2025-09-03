// For Each loop is used in vector to print the vlaues at that index
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<char> vec={'R','A','V','I','N','A'};//for each loop 
    cout<<"Size of vector: "<<vec.size()<<endl;
    for(char value : vec){
        cout<<value;
    }
    cout<<endl;
vector<char> vec2={'P','A','Y','A','L'};
 cout<<"Size of vector: "<<vec2.size()<<endl;
    for(char value1 : vec2){
        cout<<value1;
    }
    cout<<endl;
    vector<char> vec3={'N','A','K','S','H'};
     cout<<"Size of vector: "<<vec3.size()<<endl;
    for(char value3 : vec3){
        cout<<value3;
    }
    cout<<endl;
    vector<char> vec4={'V','A','N','S','H','I','K','A'};
     cout<<"Size of vector: "<<vec4.size()<<endl;
    for(char value4 : vec4){
        cout<<value4;
    }
}