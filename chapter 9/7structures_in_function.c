#include <stdio.h>
#include <string.h>

struct musician
{
   int no;
   char name[20];
   char instrument[20];
};

void info(struct musician e1);


int main(){
    struct musician m1;
    m1.no=1;
    strcpy(m1.name,"anjali");
    strcpy(m1.instrument,"guitar");
    info(m1);
    return 0;
}

void info(struct musician e1){
    printf("%d\n",e1.no);
    printf("%s\n",e1.name);
    printf("%s\n",e1.instrument);
}