#include <stdio.h>
#include <stdlib.h>

int main(){
    int*ptr;
    ptr=(int*)malloc(6*sizeof(int));
    for(int i=0;i<6;i++){
        printf("enter the integer %d\n",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("the integer %d is : %d\n",i+1,ptr[i]);
    }
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(double));

    return 0;
}