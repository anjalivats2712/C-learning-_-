#include <stdio.h>
void reversearr(int arr[7]);


int main(){
    int arr[7]={1,2,4,3,5,6,7};
    reversearr(arr);
    printf("%d",arr[6]);
    return 0;

}
void reversearr(int arr[7]){
    for(int i=0;i<7/2;i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[6-i];
        arr[6-i]=temp;
    }
}