#include <stdio.h>

int main(){
    int marks[4];
    char section[4];
    printf("enter the marks of student 1\n");
    scanf("%d",&marks[0]);
    printf("enter the marks of student 2\n");
    scanf("%d",&marks[1]);
    printf("enter the marks of student 3\n");
    scanf("%d",&marks[2]);
    printf("enter the marks of student 4\n");
    scanf("%d",&marks[3]);
//      The %c conversion specifier won't automatically skip any leading whitespace, so if there's a stray newline in the input stream (from a previous entry, for example) the scanf call will consume it immediately.

// One way around the problem is to put a blank space before the conversion specifier in the format string:

// scanf(" %c", &c);
    printf("enter the name of section 1\n");
    scanf(" %c",&section[0]);
    printf("enter the name of section 2\n");
    scanf(" %c",&section[1]);
    printf("enter the name of section 3\n");
    scanf(" %c",&section[2]);
    printf("enter the name of section 4\n");
    scanf(" %c",&section[3]);
    printf("%d %d %d %d\n",marks[0],marks[1],marks[2],marks[3]);
    
    printf("%c %c %c %c\n",section[0],section[1],section[2],section[3]);

}