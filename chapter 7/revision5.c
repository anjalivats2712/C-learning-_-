#include <stdio.h>

int printthearr(int*ptr,int n);

int main(){
    //function in arrays
    int arr[7]={1,2,3,4,5,6,7};
    printthearr(arr,7);
    //multidim arrays
    int arr2[3][5];
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<5;j++){
    //         printf("enter the marks of student [%d] in subject [%d]\n",i+1,j+1);
    //         scanf("%d",&arr2[i][j]);
    //     }
    // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<5;j++){
    //         printf("the marks of student [%d] in subject [%d] is [%d]\n",i+1,j+1,arr2[i][j]);
    //     }
    // }
    //memory in multidim
    int sec[2][2]={{1,2},{3,4}};
    printf("address of sec[0][0] is %u\n",&sec[0][0]);
    printf("address of sec[0][1] is %u\n",&sec[0][1]);
    printf("address of sec[1][0] is %u\n",&sec[1][0]);
    printf("address of sec[1][1] is %u\n",&sec[1][1]);
    
    return 0;
}
int printthearr(int*ptr,int n){
    for(int i=0;i<n;i++){
        printf("%d\n",*(ptr+i));
    }
}