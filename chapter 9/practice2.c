#include <stdio.h>

typedef struct complex{
    int real;
    int img;
}comp;

struct complex addcomplex(comp c1,comp c2); 
int main(){
    comp c1,c2,sum;
    c1.real=3;
    c2.real=4;
    c1.img=5;
    c2.img=6;
    sum=addcomplex(c1,c2);
    printf("the complex no. c1 is %d + %di\n",c1.real,c1.img);
    printf("the complex no. c2 is %d + %di\n",c2.real,c2.img);

    printf("the result of addition of vectors c1 and c2 is %d + %di\n",sum.real,sum.img);


    return 0;
}

struct complex addcomplex(comp c1,comp c2){
    struct complex result;
    result.real=c1.real+c2.real;
    result.img=c1.img+c2.img;
    return result;
}