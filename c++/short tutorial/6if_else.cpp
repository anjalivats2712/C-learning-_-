#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the number \n";
    cin>>a;
    if(a==5){
        cout<<"the number is 5";
    }
    else if (a<5){
        cout<<"the number is less than 5";
    }
    else{
        cout<<"the number is greater than 5";
    }
    
    return 0;
}