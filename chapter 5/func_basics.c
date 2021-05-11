#include <stdio.h>

void display();//function prototype

int main(){
    int a;
    printf("START\n");
    display();//function calling
    printf("STOP\n");
    return 0;
}

void display(){
    printf("display function is executing\n");//function definition
}