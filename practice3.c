#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("enter the number a");
    scanf("%d",&a);
    printf("enter the number b");
    scanf("%d",&b);
    printf("enter the number c");
    scanf("%d",&c);
    printf("enter the number d");
    scanf("%d",&d);
    if(a>b&&a>c&&a>d){
        printf("a is the greatest number");
    }
    if(b>a&&b>c&&b>d){
        printf("b is the greatest number");
    }
    if(c>b&&c>a&&c>d){
        printf("c is the greatest number");
    }
    if(d>b&&d>c&&d>a){
        printf("d is the greatest number");
    }
    return 0;
    

}