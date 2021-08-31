#include <iostream>//this is system header file --comes with a compiler
#include "this.c" // this is user defined header file --comes with a compiler

using namespace std;

int main(){ 
    int a;
    cout<<"hello world"<<endl;
    cout<<"enter the number\n";
    cin>>a;// --extraction operator
    cout<<a;// --insertion operator


    return 0;
}