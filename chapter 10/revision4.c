#include <stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("uff.txt","w");
    // char c=fgetc(ptr);
    // printf("the character stored in ptr is %c\n",c);
    // printf("the character stored in ptr is %c\n",fgetc(ptr));
    // printf("the character stored in ptr is %c\n",fgetc(ptr));
    // printf("the character stored in ptr is %c\n",fgetc(ptr));
    // printf("the character stored in ptr is %c\n",fgetc(ptr));
    // printf("the character stored in ptr is %c\n",fgetc(ptr));
    fputc('u',ptr);
    fputc('r',ptr);
    fputc('a',ptr);
    return 0;
}