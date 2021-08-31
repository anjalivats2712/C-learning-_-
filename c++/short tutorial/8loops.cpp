#include <iostream>
using namespace std;

int main(){
    int k=0;
    while(k<5){
        cout<<"the number is "<<k+1<<endl;
        k++;
    }
    do{
        cout<<"the number is "<<k<<endl;
        k++;
    }while(k>7);//operates atleast once
    cout<<k<<endl;
    for(int i=11;i<15;i++){
        cout<<"the value of i is "<<i<<endl;
    }
    return 0;
}