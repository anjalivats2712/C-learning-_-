#include <stdio.h>

int main(){
    FILE *ptr;
    int num,num2;
    ptr=fopen("sample.txt","r");
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);//thats how we read two or three nos from a file

    printf("the num contained in sample.txt is %d\n",num);
    printf("the num contained in sample.txt is %d\n",num2);
    return 0;
}