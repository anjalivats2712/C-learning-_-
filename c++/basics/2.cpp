#include <iostream>
using namespace std;
int main(){
    int a = 5 ,b=6;
    cout<<"the value of a + b is "<<a+b<<endl;
    cout<<"the value of a - b is "<<a-b<<endl;
    cout<<"the value of a * b is "<<a*b<<endl;
    cout<<"the value of a / b is "<<(float)a/b<<endl;
    cout<<"the value of a % b is "<<a%b<<endl;
    cout<<"the value of a++ is "<<a++<<endl;
    cout<<"the value of ++a is "<<++a<<endl;
    //comparision operators
    cout<<"\ncomparision operators"<<endl;
    cout<<"the value of a > b is "<<(a>b)<<endl;//this braceket is necessary
    cout<<"the value of a < b is "<<(a<b)<<endl;
    cout<<"the value of a == b is "<<(a==b)<<endl;
    cout<<"the value of a != b is "<<(a!=b)<<endl;
    cout<<"the value of a >= b is "<<(a>=b)<<endl;
    cout<<"the value of a <= b is "<<(a<=b)<<endl;
    //logical operators
    cout<<"\nLOGICAL OPERATORS :"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"the value of ((a<b) && (a==b)) is "<<((a<b)&&(a==b))<<endl;
    cout<<"the value of ((a<b) || (a==b)) is "<<((a<b)||(a==b))<<endl;
    cout<<"the value of !(a<b) is "<<!(a<b)<<endl;
    
    return 0;
}