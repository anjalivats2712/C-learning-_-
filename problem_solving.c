#include <stdio.h>

int main(){
    int a,b;
    float c,d;
    printf("enter the number\n");
    scanf("%d",&a);
    printf("enter the number\n");
    scanf("%d",&b);
    printf("enter the number\n");
    scanf("%f",&c);
    printf("enter the number\n");
    scanf("%f",&d);
    printf("%d %d\n",a+b , a-b);
    printf("%0.1f %0.1f\n",c+d ,c-d);
    return 0;
    

}

// int main(){
//     char c,s[50],sen[100];
//     printf("enter the character\n");
//     scanf("%c",&c);
//     printf("enter the string\n");
//     scanf("%s",&s);
//     printf("enter the sentence\n");
//     scanf("%[^\n]s",&sen);
//     printf("%c\n",c);
//     printf("%s\n",s);
//     printf("%s\n",sen);
//     return 0;
// }