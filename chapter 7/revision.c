#include <stdio.h>
//array 
int main(){
    int marks[4]={2,3,4,5};
    printf("%d\n",marks[0]);
    printf("%d\n",marks[1]);
    printf("%d\n",marks[2]);
    printf("%d\n",marks[3]);
    char signature[4];
    for(int i=0;i<4;i++){
        printf("enter the signature no %d\n",i+1);
        scanf(" %c",&signature[i]);
    }
    for(int i=0;i<4;i++){
        printf("the signature no %d is %c\n",i+1,signature[i]);
    }
    for(int i=0;i<4;i++){
        printf("the address of marks[%d] is %u\n",i,&marks[i]);
    }
    for(int i=0;i<4;i++){
        printf("the address of signature[%d] is %u\n",i,&signature[i]);
    }
    return 0;

    


}