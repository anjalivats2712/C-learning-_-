#include <stdio.h>

void display();

int main(){
    int a;
    printf("START\n");
    display();
    printf("STOP\n");
    return 0;
}

void display(){
    printf("display function is executing\n");
}