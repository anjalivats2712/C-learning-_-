#include <stdio.h>

int main(){
    int a;
    printf("enter the number \n");
    scanf("%d",&a);
    if(a<4){
        printf("the number is less than 4");
    }
    else{
        printf("the number is either 4 or greater than 4");
    }
    return 0;
}