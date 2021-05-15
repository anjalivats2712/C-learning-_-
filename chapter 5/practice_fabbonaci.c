#include <stdio.h>
int fabbonacci(int n);

int main(){
    int x;
    printf("enter the number\n");
    scanf("%d",&x);
    printf("The final term of fabbonaci series is %d",fabbonacci(x));
    return 0;
}

int fabbonacci(int n){
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    else{
        return fabbonacci(n-1)+fabbonacci(n-2);
    }
}