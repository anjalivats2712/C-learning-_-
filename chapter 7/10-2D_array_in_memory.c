#include <stdio.h>

int main(){
    int section[4][5];

    printf("the address of section[0][0] is %d\n",&section[0][0]);//address by default
    printf("the address of section[0][1] is %d\n",&section[0][1]);//exceeds it by 4
    printf("the address of section[1][0] is %d\n",&section[1][0]);//exceeds it by 20
    printf("the address of section[1][1] is %d\n",&section[1][1]);//exceeds it by 24
    return 0;
}