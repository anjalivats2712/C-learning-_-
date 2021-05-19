//this is method 2 to solve the prblm
#include <stdio.h>
void sumAndaverage(int a,int b,int*sum,float*average);

int main(){
    int a=3,b=4,sum;
    float average;
    sumAndaverage(a,b,&sum,&average);
    printf("%d,%0.1f",sum,average);
    return 0;



}
void sumAndaverage(int a,int b,int*sum,float*average){
    *sum=a+b;
    *average =(float)*sum/2;
}