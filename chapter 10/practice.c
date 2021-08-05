#include <stdio.h>

int main(){
    FILE *ptr;
    int num[2];
    ptr=fopen("sample.txt","r");
    for(int i=0;i<3;i++){
        fscanf(ptr,"%d",&num[i]);
    }
    for(int i=0;i<3;i++){
        printf("the value of num[%d] is %d\n",i,num[i]);
    }

    return 0;
}