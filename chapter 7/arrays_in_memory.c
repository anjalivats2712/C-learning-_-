#include <stdio.h>
//in different IDEs there are different sizes of an integer eg in vscode
//it is 4 bytes

int main(){
    int cgp[3]={10,9,8};
    printf("the address of cgp[0] is %u\n",&cgp[0]);
    printf("the address of cgp[1] is %u\n",&cgp[1]);
    printf("the address of cgp[2] is %u\n",&cgp[2]);
    return 0;
}//adderess of all the three differ by 4 bytes