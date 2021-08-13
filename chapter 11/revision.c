#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    ptr=(int*)malloc(6*sizeof(int));
    for(int i=0;i<6;i++){
        printf("enter the integer %d \n",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("the integer %d is %d\n",i+1,ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("the memory of the integer %d is %u\n",i+1,&ptr[i]);
    }
    
    int *ptr2;
    ptr2=(int*)calloc(6,sizeof(int));
    // for(int i=0;i<6;i++){
    //     printf("enter the integer %d \n",i+1);
    //     scanf("%d",&ptr2[i]);
    // }
    for(int i=0;i<6;i++){
        printf("the integer %d is %d\n",i+1,ptr2[i]);
    }
    
    //we can also free our memory using free
    free(ptr);

    //realloc
    ptr2=realloc(ptr2,2*sizeof(int));
    for(int i=0;i<2;i++){
        printf("enter the integer %d \n",i+1);
        scanf("%d",&ptr2[i]);
    }
    for(int i=0;i<2;i++){
        printf("the integer %d is %d\n",i+1,ptr2[i]);
    }
    for(int i=0;i<2;i++){
        printf("the memory of the integer %d is %u\n",i+1,&ptr2[i]);
    }

    return 0;
}