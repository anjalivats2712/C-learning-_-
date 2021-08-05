#include <stdio.h>

int main(){
    int salary1,salary2;
    char name1[20],name2[20];
    printf("enter the name1\n");
    scanf("%s",name1);
    printf("enter the name2\n");
    scanf("%s",name2);
    printf("enter the salary1\n");
    scanf("%d",&salary1);
    printf("enter the salary2\n");
    scanf("%d",&salary2);
    FILE *ptr;
    ptr=fopen("details.txt","a");
    fprintf(ptr,"%s",name1);
    fprintf(ptr,", %d\n",salary1);
    fprintf(ptr,"%s",name2);
    fprintf(ptr,", %d\n",salary2);

    return 0;
}