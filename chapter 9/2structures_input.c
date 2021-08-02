#include <stdio.h>
#include <string.h>

struct student{
    int rollno;
    char name[20];
    float marks;
};

int main(){
    struct student s1,s2,s3;
    printf("enter the roll no of student 1: \n");
    scanf("%d",&s1.rollno);
    printf("enter the marks of student 1: \n");
    scanf("%f",&s1.marks);
    printf("enter the name of student 1: \n");
    scanf("%s",s1.name);
    printf("enter the roll no of student 2: \n");
    scanf("%d",&s2.rollno);
    printf("enter the marks of student 2: \n");
    scanf("%f",&s2.marks);
    printf("enter the name of student 2: \n");
    scanf("%s",s2.name);
    printf("enter the roll no of student 3: \n");
    scanf("%d",&s3.rollno);
    printf("enter the marks of student 3: \n");
    scanf("%f",&s3.marks);
    printf("enter the name of student 3: \n");
    scanf("%s",s3.name);
    
    return 0;
}