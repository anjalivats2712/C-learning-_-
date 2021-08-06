#include <stdio.h>
#include <stdlib.h>

int main(){
    int*ptr;
    ptr=(int*)calloc(5,sizeof(int));
    //contiguous blocks of memory
    //initialises each memory block with value 0
    for(int i=0;i<5;i++){
        printf("%d\n",ptr[i]);
    }
    int*ptrr;
    ptrr=(int*)calloc(4,sizeof(int));
    for(int i=0;i<4;i++){
        printf("enter the value of integer %d\n",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<4;i++){
        printf("the value of integer %d is %d\n",i+1,ptr[i]);
    }
    
    return 0;
}