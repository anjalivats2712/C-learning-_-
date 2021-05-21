#include <stdio.h>

int main(){
    int i=4;
    int*a=&i;
    char j='A';
    char*k=&j;
    
    printf("the value of a is %u\n",a);
    a++;//increase by 4 bytes
    printf("the value of a now is %u\n",a);
    printf("the value of k is %u\n",k);
    k++;
    printf("the value of k now is %u\n",k);
    return 0;
}