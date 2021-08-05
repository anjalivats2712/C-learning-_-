#include <stdio.h>

int main(){
    FILE *ptr;
    int n=5;
    ptr=fopen("multi.txt","a");
    
    for(int i=1;i<11;i++){
        fprintf(ptr," %d X %d = %d\n",n,i,n*i);
    }
    return 0;
}