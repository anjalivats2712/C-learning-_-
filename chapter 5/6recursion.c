#include <stdio.h>

int factorial(int n);

int main(){
    int x ;
    printf("enter the number \n");
    scanf("%d",&x);
    printf("The factorial of %d is %d",x,factorial(x));
    return 0;
}

int factorial(int n){
    printf("Calling Factorial %d\n",n);
    if (n==1 || n==0){
        return 1;
    }
    else{
        return n * factorial(n-1);

    }}
     