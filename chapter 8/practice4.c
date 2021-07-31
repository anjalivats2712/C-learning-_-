#include <stdio.h>

void encrypt(char*str);
void decrypt(char*ptr);

int main(){
    char str[]="github folder c learning";
    encrypt(str);
    
    printf("%s\n",str);
    decrypt(str);
    printf("%s\n",str);

}

void encrypt(char*str){
    
    while(*str!='\0'){
        *str=*str+1;
        str++;
    }

}

void decrypt(char*ptr){
    while(*ptr!='\0'){
        *ptr=*ptr-1;
        ptr++;
    }
}