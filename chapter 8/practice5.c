#include <stdio.h>
// void count(char*str);
void presence(char*str,char c);


int main(){
    char str[]="once upon a time there was a woodcutter in the city karuto.he lives their knitting the wool";
    // count(str);
    char c;
    printf("enter the character\n");
    scanf("%c",&c);
    presence(str,c);
    
    return 0;

}

// void count(char*str){
//     int i=0;
//     while(*str!='0'){
//         if(*str=='k'){
//             i++;
//         }
//         str++;
//     }
//     printf("the no of times k appears in the string is %d",i);
// }

void presence(char*str,char c){
    int i=0;
    while(*str!='\0'){
        if(*str==c){
            i++;
        
        }
        str++;
    }
    if(i==0){
        printf("no the character %c is not present in the string \n",c);
    }
    else{
        printf("yes the character %c is present in the string \n",c);
    }
}