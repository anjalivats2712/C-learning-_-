#include <stdio.h>
#include <string.h>

int main(){
    char s1[]="hello";
    char s2[]="helo";
    int i=strcmp(s1,s2);
    //this is use to compare two strings.It returns :0 if strings are equal 
    //-ve value if ascii value of mismatched character of s1 is smaller than s2 mismatched ascii value
    //vice versa for +ve value 
    printf("the value of val 2 is %d\n",strcmp("joke","for"));
    printf("the value of val is %d\n",i);
    return 0;
}