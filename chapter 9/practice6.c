#include <stdio.h>
#include <string.h>

struct infostu{
    int seri;
    char name[20];
    float temp;
};

typedef struct employee{
    int salary;
    int level;
}emp;

void printinfo(struct infostu e1);

int main(){
    //structures
    struct infostu s1,grp[5];
    s1.seri=9;
    s1.temp=98.4;
    strcpy(s1.name,"anjali");
    printf("%d %s %0.1f\n",s1.seri,s1.name,s1.temp);

    //arrays in structures
    for(int i=0;i<5;i++){
        grp[i].seri=i+1;
    }
    for(int i=0;i<5;i++){
        printf("the value of grp[%d].seri is %d\n",i,grp[i].seri);
    }

    //another way of initialising structures
    struct infostu a3={8,"urja",96.7},a4,*ptr;

    //pointers in structures
    ptr=&a4;
    (*ptr).seri=5;
    ptr->temp=99.4;
    printf("%d %s %0.1f\n",a3.seri,a3.name,a3.temp);
    printf("%d %0.1f\n",a4.seri,a4.temp);

    //structures in functions 
    printinfo(a3);
    //typedef keyword
    emp e1;
    return 0;
}

void printinfo(struct infostu e1){
    printf("name of student is %s\n",e1.name);
    printf("serial no of student is %d\n",e1.seri);
    printf("temp of student is %f\n",e1.temp);
}