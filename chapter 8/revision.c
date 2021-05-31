#include <stdio.h>

int main(){
    //initialising strings
    char str[]={'a','n','j','a','l','i','\0'};
    char stri[]="anjali vats";
    char*ptr=str;
    //printing strings
    while(*ptr=='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    //we have another method too 
    char*pttr="stories";
    printf("\n%s\n",pttr);
    //taking inputs
    char s[34];
    printf("enter the name of season\n");
    scanf("%s",s);//scanf cant take multi words strings with spaces 
    printf("%s",s);
    return 0;

}