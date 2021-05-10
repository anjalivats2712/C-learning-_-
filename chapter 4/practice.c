#include <stdio.h>

int main(){
    int a,sum=0,i;
    int factorial=1,j;
    int sum_multi=0;
    for(i=0;i<=10;i++){
        sum+=i;

    }
    for(j=1;j<=10;j++){
        factorial*=j;
    }
    for(a=0;a<=10;a++){
        sum_multi+=(8*a);
    }
    printf("the value of sum of first 10 natural numbers is %d",sum);
    printf("\nthe factorial of 10 is %d",factorial);
    printf("\nsum of multiplication table of 8 is %d",sum_multi);
    return 0;
}