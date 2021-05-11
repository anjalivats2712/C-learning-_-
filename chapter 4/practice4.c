#include <stdio.h>

int main(){
    int a,i=2;
    printf("enter the number\n");
    scanf("%d",&a);
    while(i<a){
        if (i>=2){
            if (a%i==0){
                printf("the number is not prime\n");
                break;
            }
            else{
                printf("the number is prime\n");
                break;
            }
        }
        i++;
    }
}