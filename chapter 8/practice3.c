#include <stdio.h>

void strcpy2(char*str2,char*str1);

int main(){
    char str1[]="anjali vats anjali vats";
    char str2[34];
    strcpy2(str2,str1);
    printf("%s",str2);
    return 0;
}

void strcpy2(char*str2,char*str1){
    int i =0;
    while(*str1!='\0'){
        *str2=*str1;
        str1++;
        str2++;
    }
}
