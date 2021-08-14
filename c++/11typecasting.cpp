#include <iostream>
using namespace std;

int main(){
    int a=12;
    cout<<(float)a/5<<endl;//typecasting into float for division purposes
    float b=56.7,c=12.90;
    cout<<(int) b<<endl;
    cout<<(int) c<<endl;//it doesnt round off just removes the digits after point
    return 0;
}