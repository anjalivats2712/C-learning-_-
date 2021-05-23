#include <stdio.h>
// the \0 still occupies 1 byte in the memory
int main(){
    char str[]={'a','n','j','a','l','i','\0'};
    char*ptr=str;
    for(int i=0;i<7;i++){
        printf("the address of str[%d] i.e %c is %u\n",i,str[i],ptr+i);
    }
return 0;
}
