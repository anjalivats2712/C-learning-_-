#include <stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("sample.txt","r");
    char c=fgetc(ptr);
    printf("the content in the file sample.txt is %c\n",c);//if we write this 6 times only t will get printed each time
    printf("the content in the file sample.txt is %c\n",fgetc(ptr));
    printf("the content in the file sample.txt is %c\n",fgetc(ptr));
    printf("the content in the file sample.txt is %c\n",fgetc(ptr));
    printf("the content in the file sample.txt is %c\n",fgetc(ptr));
    printf("the content in the file sample.txt is %c\n",fgetc(ptr));
    printf("the content in the file sample.txt is %c\n",fgetc(ptr));

    return 0;
}