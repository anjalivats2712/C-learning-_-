#include <stdio.h>

int main(){
    FILE *ptr,*fptr;
    int num;
    ptr=fopen("sample.txt","r");
    //checking if file exists or not
    if(ptr==NULL){
        printf("the file doesn't exist\n");
    }
    else{
        fscanf(ptr,"%d",&num);
        printf("the value of integer stored in the file is %d\n",num);
    }
    //writing in the file
    fptr=fopen("sample2.txt","r");
    // fprintf(fptr,"i had to fall,to lose it all\n");
    //fgetc and fputc
    char c=fgetc(fptr);
    printf("the character in the sample2 file is %c\n",c);
    fputc('c',ptr);

    fclose(ptr);
    fclose(fptr);
    return 0;
}