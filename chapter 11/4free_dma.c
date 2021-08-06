#include <stdio.h>
#include <stdlib.h>
int main(){
    int*ptr;
    ptr=(int*)malloc(6*sizeof(int));
    //we alloted the memory of 6 integers first
    ptr[1]=4;
    printf("%d\n",ptr[1]);

    free(ptr);
    //here we freed that memory
    printf("%d\n",ptr[1]);
    return 0;
}