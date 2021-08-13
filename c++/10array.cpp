#include <iostream>
using namespace std;

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"enter the "<<i+1<<"th number"<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<"the "<<i+1<<"th number of array is "<<arr[i]<<endl;
    }
    int arr2[]={1,3,4,5,6};//we can also write it like this
    for(int i=0;i<5;i++){
        cout<<"the value of arr2["<<i<<"] is "<<arr2[i]<<endl;
    }
    //the 2d array
    int arr3[2][5];
    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            cout<<"enter the arr3["<<i<<"]["<<j<<"] \n";
            cin>>arr3[i][j];
        }   
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<5;j++){
            cout<<"the value of arr3["<<i<<"]["<<j<<"] is "<<arr3[i][j]<<endl;
            
        }   
    }
    return 0;
}