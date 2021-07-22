#include <stdio.h>
void printarray(int n,int arr[n]);
void printpointer(int*ptr,int n);

int main(){
    int arr[7]={1,23,3,42,5,6,7};
    printarray(7,arr);
    printpointer(arr,7);
    return 0;
}

void printarray(int n,int arr[n]){
    for(int i=0;i<n;i++){
        printf("the %dth element is %d\n",i+1,arr[i]);
    
    }
}
void printpointer(int*ptr,int n){
    for(int i=0;i<n;i++){
        printf("the %dth element is %d\n",i+1,*(ptr+i));
    
    }
}

