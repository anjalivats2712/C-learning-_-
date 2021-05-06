//lowercase and all other characters are assigned a integer number in ascii 
//table

//now we have to check whether the entered character is lowercase or not

#include <stdio.h>

int main(){
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    if (ch>=97 && ch<=122){
        printf("the entered character is lowercase");
    }
    else{
        printf("it is not lowercase");
    }
    return 0;
}