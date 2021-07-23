#include <stdio.h>

int main(){
    char str[]="formatting files\n";
    char*ptr=str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    char str2[34];
    printf("enter the string");
    scanf("%s",str2);
    printf("%s\n",str2);
    char *ptr2="anjali";
    printf("%s",ptr2);
    return 0;

}