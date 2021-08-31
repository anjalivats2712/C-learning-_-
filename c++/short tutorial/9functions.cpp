#include <iostream>
using namespace std;

int multi(int a,int b){
    return a*b;
}
void divi(int a,int b){
    cout<<"the value a / b is "<<(float)a/b<<endl;
}
int main(){
    int a,b;
    cout<<"enter the first number"<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;
    cout<<multi(a,b);
    divi(a,b);

    return 0;
}