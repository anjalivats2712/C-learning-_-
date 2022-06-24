#include <stdio.h>

int evry(int a,int b,int *sum,float*average);

int main(){
    int a,b;
    //we will write a function which will return the sum and average
    a=4,b=5;
    int sum;
    float average;
    evry(a,b,&sum,&average);
    printf("%d\n",sum);
    printf("%0.1f\n",average);

    return 0;
}

int evry(int a,int b,int *sum,float*average){
    *sum=a+b;
    *average=(float)(a+b)/2;
}


