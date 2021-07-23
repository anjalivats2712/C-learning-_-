#include <stdio.h>
#include <string.h>

int main(){
    char str[]="twinkle twinkle little star how i wonder what u are";
    char str2[50];
    strcpy(str2,str);
    //this will copy the content of second string in the first string
    printf("%s\n",str2);
    return 0;
}