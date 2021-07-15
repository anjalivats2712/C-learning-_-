#include <stdio.h>
#include <math.h>

int main(){
    int side,c,d;
    printf("enter the value of side\n");
    scanf("%d",&side);
    d=pow(side,3);
    c= pow(side,2);//typecasting float into integer
    printf("The value of area of square is %d",c);
    printf("\nthe value of volume of cube is %d",d);
    return 0;

}
//pow(base,power);