#include <stdio.h>
void address(int i);
int main(){
    int i=5;
    printf("the value of i is %d\n",i);
    address(i);
    printf("the address of i is %u\n",&i);
    return 0;
}
void address(int i){
    printf("The address of i is %u\n",&i);
}
// as u can see these two addresses are not same 