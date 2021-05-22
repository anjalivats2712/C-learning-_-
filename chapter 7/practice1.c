#include <stdio.h>

int main(){
    char section[10]={'A','B','C','D','E'};
    int mul_five[10];
    char*j=&section[0];
    printf("the value j points at before is %c\n",*j);
    j=j+2;
    printf("the value j points at after this is %c\n",*j);
    int num;
    printf("enter the number whose table u want to learn\n");
    scanf("%d",&num);
    for(int i=0;i<10;i++){
        mul_five[i]=num*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%d X %d = %d\n",num,i+1,mul_five[i]);
    }
    return 0;
}