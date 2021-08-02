#include <stdio.h>
//typedef keyword is used to specify a nicname for structure so that we dont have to write struct name>>
//again and again.it can be used in other datatypes also but mostly used in structures

typedef struct employee{
    int code;
    int salary;
}emp;
int main(){
    // struct employee e1; or 
    emp e1;
    e1.code=2;
    e1.salary=345;
    printf("%d",e1.salary);
    return 0;
}