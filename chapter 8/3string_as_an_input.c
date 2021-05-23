#include <stdio.h>

int main(){
    char str[]="formatting files";
    char*ptr=str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
}