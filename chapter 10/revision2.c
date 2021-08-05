#include <stdio.h>

int main(){
    //EOF
    FILE*ptr;
    ptr=fopen("jkl.txt","r");
    char c;
    while(c!=EOF){
        c=fgetc(ptr);
        printf("%c",c);
    }
    return 0;
}