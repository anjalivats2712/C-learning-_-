#include <stdio.h>

void slice(char*ptr,int a,int b);

int main(){
    char str[]="anjali vats is a good girl";
    
    slice(str,2,10);
    printf("the value of string str is %s\n",str);
    return 0;

}
void slice(char*ptr,int a,int b){
    int i=0;
    while((i+a)<b){
        ptr[i]=ptr[i+a];
        i++;
    }
    ptr[i]='\0';
}