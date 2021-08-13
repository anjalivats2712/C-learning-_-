#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"hello user!\n";
    cout<<"please enter a number btw 1-5\n";
    cin>>number;
    switch (number)
    {
    case 1:{
        cout<<"the number is 1\n";
        break;
    }
    case 2:{
        cout<<"the number is 2\n";
        break;
    }
    case 3:{
        cout<<"the number is 3\n";
        break;
    }
    case 4:{
        cout<<"the number is 4\n";
        break;
    }
    case 5:{
        cout<<"the number is 5\n";
        break;
    }
       
    
    default:
        cout<<"invalid number\n";
        break;
    }
    return 0;
}