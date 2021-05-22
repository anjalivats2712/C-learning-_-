#include <stdio.h>

void printArray(int*ptr,int n);

int main(){
    int arr[]={2,3,4,31,22,1,6};
    printArray(arr,7);
    return 0;

}

void printArray(int*ptr,int n){
    for(int i=0;i<n;i++){
        printf("the value at number %d is %d\n",i+1,*(ptr + i));
    }

}