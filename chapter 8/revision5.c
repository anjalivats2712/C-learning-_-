#include <stdio.h>
#include <string.h>
int main(){
    //gets and puts
    char so[23];
    printf("enter so\n");
    gets(so);
    puts(so);
    //strings declared through pointer can be reinitialised
    char *ptr="ufffff";
    ptr="nooooo";
    printf("%s",ptr);
    //strlen
    char name[]="urjapagalsi";
    printf("length of name calc with strlen is %d\n",strlen(name));
    char*ptr2=name;
    int lenofname=0;
    while(*ptr2!='\0'){
        lenofname++;
        ptr2++;
    }
    printf("length of name calc with loop is %d\n",lenofname);
    //strcpy
    char str1[]="original";
    char str2[30];
    strcpy(str2,str1);
    printf("%s\n",str2);
    //strcat
    char str3[]="copy";
    strcat(str3,str2);
    printf("%s\n",str3);
    //strcmp
    char str4[]="kal";
    printf("%d",strcmp(str4,str3));
    return 0;
}