# include <stdio.h>

int main(){
    int a, b;
    char c;
    
    printf("enter the value of a \n");
    scanf("%d", &a);
    printf("enter the value of b \n");
    scanf("%d", &b);
    printf("the value of a and b is %d \n",a+b);
    printf("enter the value of c \n");
    scanf(" %c",&c);
    printf("the value of c is %c\n",c);
    return 0;


}