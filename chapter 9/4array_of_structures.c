#include <stdio.h>

struct musician
{
    int no;
    char name[20];
    char instrument[20];
};


int main(){
    struct musician clan[10];
    for(int i=1;i<11;i++){
        clan[i-1].no=i;
    }
    
    for(int i=0;i<10;i++){
        printf("the no. of musician clan[%d] of clan is %d\n",i,clan[i].no);
    }
    return 0;
}