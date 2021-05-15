#include <stdio.h>

void star(int n);


int main(){
    int x =3;
    star(x);

    return 0;
}

void star(int n){
    if (n==1){
        printf("*\n");
        return;
    }
    star(n-1);
    for(int i=0;i<2*n-1;i++){
        printf("*");


    }
    printf("\n");
}