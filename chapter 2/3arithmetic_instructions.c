#include <stdio.h>

int main(){
    int b=2,c=4;
    int z;
    z=b*c;//allowed
    //b*c=z is not allowed
    printf("%d\n",z);
    printf("the value of calculations is %d",3*4-2);
    printf("the result of this operation is %d\n",5+3*2%10-8*6);
    //here 3,4,2 are operands whereas *,- are operators
    return 0;
    
}