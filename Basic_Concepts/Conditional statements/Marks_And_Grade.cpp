/*Take input percentage of a student and print the Grade according to marks.
 81-100 very good 
 61-80 good
 41-60 average
 <=40 fail*/
 #include<iostream>
 using namespace std;
 int main(){
    int mark;
    cout<<"Enter Percentage: ";
    cin>>mark;
    if((mark<=100)&&(mark>=81)){
        cout<<"Very Good";}
     else{
        if(mark>=61)
        {
            cout<<"Good";
        }
        else{
            if(mark>=41)
            {
                cout<<"Average";
            }
            else{
                cout<<"Fail";
            }
        }
    }
 }