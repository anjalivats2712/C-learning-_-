#include <iostream>
using namespace std;

int main(){
    int a=11;
    // short<int<long<long long in terms of values 
    cout<<"the value of integer a is "<<a<<endl;
    float b=1.2;
    cout<<"the value of float b is "<<b<<endl;
    // float<double<long double
    int const c=12;
    // c=34; throws error when we reassign it
    b=3.4;//we can reassign the variables which are not constant
    cout<<b;
    return 0;
}