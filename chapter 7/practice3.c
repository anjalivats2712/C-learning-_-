#include <stdio.h>

int main(){
    int arr[8]={1,2,3,44,1,-2,-3,-4};

    int n=0;
    for(int i=0;i<8;i++){
        if (arr[i]>0){
            n=n+1;
        }

    }
    printf("the number of positive terms in the array is %d\n",n);
}