#include <stdio.h>
#include <math.h>

int main(){
    int side,c;
    printf("enter the value of side\n");
    scanf("%d",&side);
    c= pow(side,2);//typecasting float into integer
    printf("The value of area of square is %d",c);
    return 0;

}
//pow(base,power);