//Wap if an array contains any duplicate elemnets.
#include <iostream>
using namespace std;
int main(){
    int n,A[10];
    cout<<"Enter no of elements(Max = 10): ";
     cin>>n;
     cout<<"Enter array elements: ";
     for(int j=0; j<n ; j++){
        cin>>A[j];
    }
    int Dupli=0;
    for(int i= 0 ; i<= n ; i++){
        for(int k = i+1; k<= n ; k++){
        if(A[i] == A[k] )
        Dupli = 1;
        break;}
        if(Dupli){
            break;
        }}
        if(Dupli){
      cout<<"Duplicate element is found ";}
     else
            cout<<"No Duplicate elements in the array.";
    
}
