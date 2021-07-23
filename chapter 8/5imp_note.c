#include <stdio.h>
int main(){
    char str[]="ANJALI VATS";//it cant be changed 
    //str ="now and then";

    char *ptr="kartik vats";//this can be changed
    ptr="kartik";

    printf("%s\n",str);
    printf("%s\n",ptr);
    return 0;
}