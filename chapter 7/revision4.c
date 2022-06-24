#include <stdio.h>

int main(){
    //arrays
    int rainbow[7];
    rainbow[0]=1;
    rainbow[1]=2;
    rainbow[2]=3;
    rainbow[3]=4;
    rainbow[4]=5;
    rainbow[5]=6;
    rainbow[6]=7;
    printf("%d\n",&rainbow[0]);
    printf("%d\n",rainbow[1]);
    printf("%d\n",rainbow[2]);
    printf("%d\n",rainbow[3]);
    printf("%d\n",rainbow[4]);
    printf("%d\n",rainbow[5]);
    printf("%d\n",rainbow[6]);

    char uff[3],igt[5]={'a','b','c','d','e'};
    for(int i=0;i<5;i++){
        printf("%c\n",igt[i]);
    }
    // for(int i=0;i<3;i++){
    //     printf("enter the value of uff[%d]\n",i);
    //     scanf(" %c",&uff[i]);
    // }
    // for(int i=0;i<3;i++){
    //     printf("%c\n",uff[i]);
    // }
    for(int i=0;i<5;i++){
        printf("the address of igt[%d] is %u\n",i,&igt[i]);
    }
    //pointer arithmetics 
    int a=0;
    int*ptr=&a;
    printf("the value of ptr is %u\n",ptr);
    ptr++;
    printf("the value of ptr now is %u\n",ptr);
    char b="c";
    char*ptrb=&b;
    printf("the value of ptrb is %u\n",ptrb);
    ptrb++;
    printf("the value of ptrb now is %u\n",ptrb);
    //try runn
    int arr[]={4,2,1,3};
    int*ptra=&arr[0];
    printf("the value ptra points at %d\n",*ptra);
    ptra++;
    printf("the value ptra points at now is %d\n",*ptra);
    //taking above as reference
    int arr2[4];
    int*ptr2=&arr2[0];
    for(int i=0;i<4;i++){
        printf("enter the value of arr2[%d]\n",i);
        scanf("%d",ptr2);
        ptr2++;
    }
    for(int i=0;i<4;i++){
        printf("%d\n",arr2[i]);
    }


    return 0;
}