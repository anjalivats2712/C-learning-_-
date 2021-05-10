#include <stdio.h>

int main(){
    int i=0;
    while(i<15){
        printf("the value of i is %d\n",i);
        if (i==8){
            break;
        }
        i++;
    }
}