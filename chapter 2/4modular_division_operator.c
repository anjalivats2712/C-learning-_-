#include <stdio.h>
//% is the modular division operator which returns remainder
//it cant be applied on float
//its sign is same as the numerator

int main(){
    printf("%d\n",5%2);
    printf("%d\n",-5%2);//sign of remainder will be -ve
    printf("%d\n",5%-2);//sign of remainder will be +ve
    
}