#include <stdio.h>

int summ(int n);
int main(){
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("sum of natural numbers upto %d is %d\n",n,summ(n));
    return 0;
}

int summ(int n){
    printf("Calling sum of %d\n",n);
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    else{
        return n + summ(n-1);
    }
}