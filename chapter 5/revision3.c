#include <stdio.h>
#include <math.h>
void func();//function prototypes

void girl();
void woman();
void granny();

int calcsum(int a);
int main(){
    //functions
    printf("START\n");
    func();
    printf("STOP\n");
    //function inside function
    girl();
    int side=9;
    int c=pow(side,2);
    printf("the value of square of side is %d\n",c);
    //recursion
    int summer=10;
    printf("%d",calcsum(summer));

    return 0;
}

void func(){
    printf("the function is executing\n");
}

void girl(){
    printf("she is a girl\n");
    woman();
}
void woman(){
    printf("she is a woman\n");
    granny();
}
void granny(){
    printf("she is a granny\n");
}
int calcsum(int a){
    if (a==1||a==0){
        return a;
    }
    else{
        return a + calcsum(a-1);
    }
}