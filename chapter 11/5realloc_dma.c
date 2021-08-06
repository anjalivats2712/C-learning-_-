#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    ptr=(int*)malloc(4*sizeof(int));
    for(int i=0;i<4;i++){
        printf("enter the value of integer %d\n",i+1);
        scanf("%d",&ptr[i]);
    }
    ptr=realloc(ptr,6*sizeof(int));
    //we can increase or decrease the memory allocated
    for(int i=0;i<6;i++){
        printf("enter the value of integer %d\n",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("the value of integer %d is %d\n",i+1,ptr[i]);
        
    }


    return 0;
}