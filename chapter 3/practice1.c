#include <stdio.h>

int main(){
    int a,b,c;
    printf("enter a marks");
    scanf("%d",&a);
    printf("enter b marks");
    scanf("%d",&b);
    printf("enter c marks");
    scanf("%d",&c);
    if((a+b+c)/3>=40 && a,b,c>=33){
        printf("you are passed,congo");
    }
    else{
        printf("you are failed");
    }
    return 0;



}