#include <iostream>
#include <string>
using namespace std;


class Musician{
    public:
    int no;
    string name,instrument;
    void info(){
        cout<<"the name of the musician no "<<this->no<<" is "<<this->name<<" and he plays "<<this->instrument<<endl;

    }
    Musician(int no,string n){
        this->name=n;
        this->no=no;
    }
};

int main(){
    class Employee{
        public:
        int serialNo,salary;
        string name;
        void printdetails(){
            cout<<"the employee no "<<this->serialNo<<"'s name is "<<this->name<<" and his salary is "<<this->salary<<endl;
        }
    };
    //we can also write this class outside the main function
    Employee sam;
    sam.name="sam";
    sam.salary=100;
    sam.serialNo=1;
    cout<<"the employee no "<<sam.serialNo<<"'s name is "<<sam.name<<" and his salary is "<<sam.salary<<endl;
    sam.printdetails();
    Musician ron(1,"ron");
    ron.instrument="piano";
    ron.info();

    return 0;
}