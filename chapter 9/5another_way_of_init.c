#include <stdio.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee anjali={1,345.66,"anjali"};
    struct employee mia={0};
    printf("%s\n",mia.name);
    printf("%s\n",anjali.name);
    printf("%d\n",mia.code);
    printf("%0.1f\n",mia.salary);


    return 0;
}