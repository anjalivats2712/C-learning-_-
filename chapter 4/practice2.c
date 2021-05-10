#include <stdio.h>
int main(){
    int a,i;
    printf("enter the number\n");
    scanf("%d",&a);
    
    for(i=10;i;i--){
        printf("%d X %d = %d\n",a,i,a*i);
    }
    return 0;
}