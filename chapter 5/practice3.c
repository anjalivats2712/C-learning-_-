#include <stdio.h>

int main(){
    int a;
    a=3;
    printf("%d %d %d\n",a,++a,a++);//arguements in print is passed from right to left
    return 0;
}
//important:every compiler has different results in this has diff behavior in this