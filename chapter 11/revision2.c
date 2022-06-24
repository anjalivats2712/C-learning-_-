#include <stdio.h>
#include <stdlib.h>

int main(){
    //malloc
    int*ptr,*ptr2;
    ptr=(int*)malloc(6*sizeof(int));
    for(int i=0;i<6;i++){
        ptr[i]=i+1;
    }
    for(int i=0;i<6;i++){
        printf("ptr[%d] is equal to %d\n",i,ptr[i]);
    }
    //calloc
    ptr2=(int*)calloc(4,sizeof(int));
    for(int i=0;i<4;i++){
        printf("%d\n",ptr2[i]);//calloc initialises each value by 0
    }
    free(ptr);
    printf("%d\n",ptr[1]);
    
    //realloc
    ptr2=realloc(ptr2,3*sizeof(int));
    for(int i=0;i<3;i++){
        ptr2[i]=2*(i+1);
    }
    for(int i=0;i<3;i++){
        printf("%d ",ptr2[i]);
    }
    return 0;
}