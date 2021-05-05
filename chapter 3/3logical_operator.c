#include <stdio.h>

int main(){
    int age;
    printf("enter your age");
    scanf("%d",&age);
    if(age>=70||age<18){
        printf("you cant drive");
    }
    else{
        printf("you can drive");
    }
    return 0;
}