#include <stdio.h>
float avv(int a,int b,int c);
float main(){
    int a,b,c;
    printf("enter the number a\n");
    scanf("%d",&a);
    printf("enter the number b\n");
    scanf("%d",&b);
    printf("enter the number c\n");
    scanf("%d",&c);
    float d = avv(a,b,c);
    printf("The average of a,b and c is %f",d);

    return 0;
}

float avv(int a,int b,int c){
    return (float)(a+b+c)/3;
}