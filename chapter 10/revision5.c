#include <stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("uff.txt","r");
    char c;
    while(c!=EOF){
        c=fgetc(ptr);
        printf("%c",c);
    }
    return 0;
}