#include <stdio.h>

int main(){
    int marks[4]={3,31,39,23};
    int*j=&marks[0];
    printf("the address of marks[0] is %u\n",j);
    printf("the value of number which j points is %u\n",*j);
    j++;
    printf("after increment");
    printf("the value of j is %u\n",j);
    printf("the value of number which j points is %u\n",*j);

}