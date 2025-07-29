//Given lenght and breadth of a rectangle and find whether the area is greater than its perimeter
#include<iostream>
using namespace std;
int main(){
    int ln,br,area,peri;
    cout<<"Length of Rectangle: ";
    cin>>ln;
    cout<<"Breadth of Rectangle: ";
    cin>>br;
    area = ln*br;
    peri = 2*(ln+br);
    if(area==peri){
        cout<<"Both area and perimeter are same."<<area <<peri;
    }
    else if(area>peri){
                    cout<<"Perimeter is : "<<peri <<endl <<"Area is : " << area<<endl;
        cout<<"Area is greater than perimeter.";}
        else{
            cout<<"Perimeter is : "<<peri <<endl <<"Area is : " << area<<endl;
            cout<<"Perimeter is greater than area.";
            
        }
    }

