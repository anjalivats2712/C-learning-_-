#include <stdio.h>

int main(){
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    (a<5)?printf("the number is less than 5"):printf("the number is not less than 5");
    //condition?statement-if-true:statement-if-false;
    return 0;
}