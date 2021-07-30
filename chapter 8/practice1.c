#include <stdio.h>

int main(){
    char str1[34];
    char str2[34];
    printf("enter the value of first string\n");
    scanf("%s",str1);
    char c;
    int i=0;
    printf("enter the value of second string\n");
    
    while(c!='\n'){
        fflush(stdin);//or we can leave a space before %c is scanf
        scanf("%c",&c);

        str2[i]=c;
        i++;
    }
    str2[i]='\0';
    printf("the value of str1 is %s\n",str1);
    printf("the value of str2 is %s\n",str2);
    printf("the value of comparision is %d\n",strcmp(str1,str2));
    return 0;

}