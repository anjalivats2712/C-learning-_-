#include <stdio.h>
#include <string.h>

int main(){
    char s1[]="anjali ";
    char s2[]="vats";
    strcat(s1,s2);
    //it will add(concatenate) the content of scnd string into the first string but will not add the space btw them if not include in the first file
    printf("%s\n",s1);
    return 0;

}