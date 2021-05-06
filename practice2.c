#include <stdio.h>

int main(){
    int income;
    printf("enter the income\n");
    scanf("%d",&income);
    if (income<250000){
        printf("you are free from tax");
    }
    else if(income>=250000 && income<500000){
        printf("you have to pay Rs.%d as tax",income/20);
    }
    else if(income>=500000 && income<1000000){
        printf("you have to pay Rs.%d as tax",income/5);
    }
    else if(income>=1000000 ){
        printf("you have to pay Rs.%d as tax",(income*10)/3);
    }
    return 0;
}