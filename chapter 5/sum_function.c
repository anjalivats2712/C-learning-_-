#include <stdio.h>

int sum(int a,int b);

int main(){
    int c;
    c=sum(4,5);
    printf("the sum of the two numbers is %d",c);
    return 0;
}

int sum(int a,int b){
    return a+b;
}