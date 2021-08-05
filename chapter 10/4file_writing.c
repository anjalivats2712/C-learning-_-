#include <stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("jkl.txt","w");
    fprintf(ptr,"this is called file writing");
    return 0;
}