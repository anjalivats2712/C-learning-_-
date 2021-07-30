#include <stdio.h>
#include <string.h>

int main(){
    char str[]="anjali vats";
    int c=strlen(str);
    char str2[34];
    char*ptr=str;
    int i=0;
    printf("the length of string using strlen function is %d\n",c);
    while(*ptr!='\0'){
        i++;
        ptr++;
    }
    printf("the length of string using the loop is %d\n",i);
    strcpy(str2,str);
    printf("we can print the content of str2 is %s",str2);
    strcat(str2,str);
    printf("\nwe can print the content of str2 is %s\n",str2);
    printf("the comparision of values is %d\n",strcmp("goat","buffalo"));
}