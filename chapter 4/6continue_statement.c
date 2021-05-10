#include <stdio.h>

int main(){
    int a=4;
    int i=0;
    while(i<10){
        i++;
        if(i!=a){
            continue;
        }
        else{
            printf("%d",i);
        }
    }
}
//break statement completely exists the loop
//continue statement skips the particular iteration of loop