#include <stdio.h>

struct employee{
    int no;
    int salary;
};


int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    (*ptr).no=1;
    //or
    ptr->salary=23;//arrow operator

    printf("%d\n",e1.salary);
    printf("%d\n",e1.no);






    return 0;
}