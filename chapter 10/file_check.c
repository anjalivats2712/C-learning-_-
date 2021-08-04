#include <stdio.h>

int main(){
    int num;
    FILE *ptr;
    ptr=fopen("jkl.txt","r");
    if(ptr==NULL){
        printf("the file does not exist\n");
    }
    else{
        fscanf(ptr,"%d",&num);
        printf("%d",num);
    }
    return 0;
}