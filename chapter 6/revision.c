#include <stdio.h>

// int main(){
//     int i=3;
//     int *j=&i;
//     printf("the value of i is %d\n",i);
//     printf("the value of i is %u\n",*j);
//     printf("the address of i is %u\n",&i);
//     printf("the value of i is %u\n",*(&i));
//     printf("the value of j is %u\n",&i);
//     printf("the value of j is %d\n",j);
//     printf("the address of j is %u\n",&j);
// }

//pointer to pointer
int main(){
    int i=5;
    int *j=&i;
    int **k=&j;
    printf("the value of i is %d\n",i);
    printf("the address of i is %u\n",j);
    printf("the address of j is %u\n",k);
    return 0;
}