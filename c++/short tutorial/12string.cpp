#include <iostream>
#include <string>
using namespace std;

int main(){
    string a= "anjali vats";
    cout<<"the name is "<<a<<endl;
    cout<<"the length of the name is "<<a.length()<<endl;
    cout<<"the substring of the name is "<<a.substr(0,6)<<endl;
    //this substring will start from 0 and prints the 6 letters after 0
    string c=a.substr(2,4);
    cout<<c;
    return 0;
}