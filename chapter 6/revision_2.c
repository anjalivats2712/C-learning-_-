#include <stdio.h>
void wrongswap(int a,int b);//call by value
void swap(int*a,int*b);//call by reference
void address(int a);
void addd(int *a);
int main(){
    int a=3,b=4;
    printf("the value of a and b initially is %d and %d\n",a,b);
    wrongswap(a,b);
    printf("the value of a and b after wrongswap is %d and %d\n",a,b);
    swap(&a,&b);
    printf("the value of a and b after swap is %d and %d\n",a,b);
    address(a);
    printf("the address of a is %u\n",&a);
    addd(&a);
    return 0;

}

void wrongswap(int a,int b){
    int temp;
    temp= a;
    a= b;
    b=temp;


}
void swap(int*a,int*b){
    int temp;
    temp= *a;
    *a= *b;
    *b=temp;


}

void address(int a){
    printf("the address of a is %u\n",&a);
}

void addd(int*a){
    printf("the address of a is %u\n",a);
}