
/*Give a point(x,y) and find it lies in1st quadrant , 2nd 
 3rd, 4th , on x axis , on y axis or at origin.*/
#include<iostream>
 using namespace std;
 int main(){
    int x,y;
    cout<<"Enter x axis Coordinate:  ";
    cin>>x;
    cout<<"Enter y axis Coordinate: ";
    cin>>y;
    if((x==0)&&(y==0)){
    cout<<"It is at origin.";}
    else{
        if((x>0)&&(y>0))
        {
            cout<<"1st Quadrant.";
        }
        else{
            if((x<0)&&(y>0)){
                cout<<"2nd Quadrant.";
            }
            else{
                if((x<0)&&(y<0)){
                    cout<<"3rd Quadrant.";
                }
                else{
                    if((x>0)&&(y<0)){
                    cout<<"4th Quadrant.";}
                    else{
                        if((x==0)&&(y>0)||(y<0)){
                            cout<<"It is on y axis.";
                        }
                        else{
                            cout<<"It is on x axis.";
                        }
                    }
            }
        }
    }

}
 }