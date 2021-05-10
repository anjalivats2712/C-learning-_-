#include <stdio.h>

int main(){
    int a=17;
    printf("the value of a is %d\n",a++);//prints first then increment
    printf("the value of a is %d\n",a);
    int b=6;
    printf("the value of b is %d\n",++b);
    //++b:increments first then prints
    //same for decrements operators
    int c=4;
    printf("the value of c is %d",--c);
    return 0;

}