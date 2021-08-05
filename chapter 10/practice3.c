#include <stdio.h>

int main(){ 
    FILE *ptr,*fptr;
    ptr=fopen("jkl.txt","r");
    char c;
    fptr=fopen("copy.txt","a");
    while(c!=EOF){
        c=fgetc(ptr);
        fprintf(fptr,"%c",c);
    }
    while(c!=EOF){
        c=fgetc(ptr);
        fprintf(fptr,"%c",c);
    }
    return 0;
}