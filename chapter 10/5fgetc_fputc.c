#include <stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("sample.txt","w");
    char content[34];
    fgetc(ptr);
    fputc(4,ptr);
    return 0;
}