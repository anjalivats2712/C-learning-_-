#include <stdio.h>

int main(){
    char str[]={'A','B','C','D','\t','E','F','\0'};
    char s[]="anjali vats";//no need to put null character here
    //printing a string
    char*ptr = str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;

}