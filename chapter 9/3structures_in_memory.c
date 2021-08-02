#include <stdio.h>

struct employee{
    int code;
    float salary;
    char name[10];
    char d;
};

int main(){
    struct employee anjali={1,345.66,"anjali","g"};
    printf("%u\n",&anjali.code);
    printf("%u\n",&anjali.salary);
    printf("%u\n",&anjali.name);
    printf("%u\n",&anjali.d);

   


    return 0;
}