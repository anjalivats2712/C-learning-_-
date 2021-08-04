#include <stdio.h>

int main(){
    char content[23];
    FILE *ptr;
    ptr=fopen("sample.txt","r");
    fscanf(ptr,"%s",content);
    printf("the content contained in the file sample.txt is %s\n",content);
    

    return 0;
}