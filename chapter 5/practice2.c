#include <stdio.h>
float farehneit(int C);

int main(){
    int C;
    printf("enter the temperature in celsius\n");
    scanf("%d",&C);
    printf("The temperature in farenheit is %f",farehneit(C));
    return 0;
}
float farehneit(int C){
    return (float)(C*9)/5 + 32;
}