#include <stdio.h>
#include <string.h>

typedef struct account{
    int code;
    char name[20];
    char accountNo[10];
    float money;

}acc;

int main(){
    acc a1={1,"anjali","AN12345",1111111.11};
    // a1={1,"anjali","AN12345",1111111.11};
    printf("the code of account holder is %d\n",a1.code);
    printf("the name of account holder is %s\n",a1.name);
    printf("the accountNo of account holder is %s\n",a1.accountNo);
    printf("the money in account holder is %0.2f\n",a1.money);
    return 0;


}