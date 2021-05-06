#include <stdio.h>

int main(){
    int marks;
    printf("enter your marks\n");
    scanf("%d",&marks);
    if(marks>80 && marks<=100){
        printf("your grade is A");
    }
    else if(marks>60 && marks<=80){
        printf("your grade is B");
    }
    else if(marks>40 && marks<=60){
        printf("your grade is C");
    }
    else{
        printf("you are failed");
    }
    return 0;

}