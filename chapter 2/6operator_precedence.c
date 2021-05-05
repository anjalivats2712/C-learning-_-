// in c language mathematical language like bodmas,no longer 
// is valid there is a definite rule of operator precedence
// and associativity
// priority order 1.*,/,%
//                2.+,-
//                3.=

#include <stdio.h>

int main(){
    printf("%d\n",4*5-3);//operator precedence
    printf("%d\n",4*5/5*6);// associavity order from left to right
    // (20/5)*6 // 4*6
    return 0;

}