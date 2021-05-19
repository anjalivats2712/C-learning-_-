// now that the address are passed to function,the function can now modify the value
// of a variable in calling the function using * and &

#include <stdio.h>
void wrong_swap(int a,int b);
void swap(int *a,int*b);
int main(){
    int x =3,y=4;
    printf("the value of x and y before swap is %d and %d\n",x,y);
    // wrong_swap(x,y);
    swap(&x,&y);
    printf("the value of x and y after swap is %d and %d ",x,y);
    return 0;
}

void wrong_swap(int a,int b){
    int temp;
    temp = a;
    a=b;
    b=temp;

}
void swap(int*a,int*b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;

}