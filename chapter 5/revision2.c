#include <stdio.h>

int summ(int a);//function to find sum of first natural nos
int factorial(int b);

int main(){
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("the summ of first %d natural nos is %d\n",n,summ(n));
    printf("the factorial of first %d natural nos is %d\n",n,factorial(n));

    return 0;
}



int summ(int a){
    printf("calling summ(%d)\n",a);
    if (a==0){
        return 0;
    }
    else if(a==1){
        return 1;
    }
    else{
        return a + summ(a-1);
    }
}

int factorial(int b){
    printf("calling factorial(%d)\n",b);
    if (b==0||b==1){
        return 1;
    }
    else{
        return b*factorial(b-1);
    }
}