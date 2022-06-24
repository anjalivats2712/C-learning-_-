#include <stdio.h>

int main(){
    int a=3;
    int b;
    printf("enter the value of b\n",b);
    scanf("%d",&b);
    // printf("the value of a is %d\n ",a);
    // printf("the value of a after increment is %d\n",a++);
    // printf("the value of a is %d\n",++a);
    // printf("the value of a after decrement %d\n",a--);
    // printf("the value of a is %d\n",--a);
    // printf("the final value of a is %d\n ",a);
    while(a<20){
        printf("the value of a is %d\n",a);
        a++;
    }
    while(b<10){
        if(b>2){
            printf("the value of b is %d\n",b);
            
        }
        b++;
    }
    int c=3,d=1;
    do{
        printf("its gonna be rain tomorrow %d\n",c);
        c++;
    }while(c>5);
    while(d<10){
        if(d==5){
            d++;
            continue;
        }
        printf("the value of d is %d\n",d);
        d++;
        // if(d==8){
        //     break;
        // }    
    }
    //for loop
    for(int i=0;i<5;i++){
        printf("the value of i is %d\n",i);
    }
    for(int i=10;i>0;i--){
        printf("the value of i is %d\n",i);
    }

    return 0;
}