#include <stdio.h>

int main(){
    FILE *ptr;
    int c=8;
    ptr=fopen("newfile.txt","w");
    fputc('c',ptr);
    putc('r',ptr);
    putc('g',ptr);
    fclose(ptr);
    return 0;
}