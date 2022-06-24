#include <stdio.h>

int main(){
    //strings
    char A[]={'a','n','j','a','l','i','\0'};
    char B[]="ANJALI";
    //printing these strings
    char*ptr=A;
    char*ptr2=B;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    while(*ptr2!='\0'){
        printf("%c",*ptr2);
        ptr2++;
    }
    // s 
    char *ptr3="hello";
    printf("%s",ptr3);
    char s[34];
    printf("enter the strings\n");
    scanf("%s",s);
    printf("%s",s);
    char *ptrr="noway";
    printf("%s",ptrr);
    


    return 0;
}