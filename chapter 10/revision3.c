#include <stdio.h>

int main(){
    FILE *ptr,*ptr2,*ptr4;
    int num,num2,num3;
    ptr=fopen("sample.txt","r");
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);
    fscanf(ptr,"%d",&num3);
    printf("the value of integer stored in file is %d\n",num);
    printf("the value of integer stored in file is %d\n",num2);
    printf("the value of integer stored in file is %d\n",num3);
    char str[30];
    ptr2=fopen("jkl.txt","r");
    fscanf(ptr2,"%s",str);
    printf("%s",str);//only one word gets printed
    FILE *ptr3,*ptr5;
    ptr3=fopen("ajkl.txt","r");
    if(ptr3==NULL){
        printf("the file doesnt exist\n");
        
    }
    else{
        printf("the file exists\n");
    }

    ptr4=fopen("hello.txt","w");
    fprintf(ptr4,"hello my name is anjali\n");

    //fgetc,fputc
    ptr5=fopen("uff.txt","w");
    fgetc(ptr5);
    fputc('H',ptr5);

    return 0;
}