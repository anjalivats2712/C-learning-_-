//conditional or ternary operators
#include <stdio.h>

int main(){
    int a;
    char b='b';
    printf("enter the number\n");
    scanf("%d",&a);
    (a<5)?printf("the number is less than 5"):printf("the number is not less than 5");
    //condition?statement-if-true:statement-if-false;
    (a==5)?printf("\na is equal to five"):printf("\na is not equal to five");
    (b=='A')?printf("\nb is equal to A"):printf("\nb is not equal to A");
    return 0;
}