#include <stdio.h>
int sum(int a,int b);

int main(){
    int a,b;
    a=4;
    b=7;
    printf("the value of a and b is %d and %d\n",a,b);
    printf("the sum of a and b is %d\n",sum(a,b));
    printf("the value of a and b after function call is %d and %d\n",a,b);
}

int sum(int a,int b){
    int c;
    c=a+b;
    a=456;
    b=4234;
    return c;
}
//we cant change the variables of main function by using another function