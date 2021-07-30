#include <stdio.h>

void slice(char*ptr,int a,int b);

int main(){
    char str[]="anjali vats is a good girl";
    // int a,b;
    // printf("enter the first slice \n");
    // scanf("%d",&a);
    // printf("enter the second slice \n");
    // scanf("%d",&b);
    
    slice(str,2,10);
    printf("the value of string str is %s\n",str);
    return 0;

}
void slice(char*ptr,int a,int b){
    char str2[34];
    int i=0;
    int j=a;
    while(j<b){
        
        ptr[i]=*(ptr+j);
        j++;
        i++;
        
        }
    
}