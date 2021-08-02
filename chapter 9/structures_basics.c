#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    char name[20];
    float salary;
};

int main(){
    struct employee e1;
    e1.code=453;
    e1.salary=456.2;
    strcpy(e1.name,"anjali");

    printf("%d\n",e1.code);
    printf("%0.2f\n",e1.salary);
    printf("%s\n",e1.name);
    return 0;
}