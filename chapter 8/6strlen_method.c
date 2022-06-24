#include <stdio.h>
#include <string.h>

int main(){
    char str[]="winter is coming,here we go";
    // int a=strlen(str); we can also do it like this
    printf("the length of str is %d\n",strlen(str));
    char *ptr =str;
    int i=0;
    // strlen function gives the length of the string as an integer without including the null character
    while(*ptr!=0){
        ptr++;
        i++;
    }
    printf("the length of str calculated by the loop is %d\n",i);
    return 0;
}