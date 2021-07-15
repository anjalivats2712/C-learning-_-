#include <stdio.h>

int main(){
    int i=1,j;
    printf("table of:\n");
    scanf("%d",&j);
    printf("table of %d using while loop\n",j);
    while(i<11){
        printf("%d X %d = %d\n",j,i,j*i);
        i++;
    }
    printf("table of %d using for loop\n",j);
    for(int a=1;a<11;a++){
        printf("%d X %d = %d\n",j,a,j*a);
    }
    int c=1;
    printf("table of %d using do-while loop\n",j);
    do{
        printf("%d X %d = %d\n",j,c,j*c);
        c++;

    }while(c<11);
    int k=0;
    while(k<=20){
        if(k>12){
            printf("%d X 6 = %d\n",k,k*6);
        }
        k++;
    }
 
    return 0;
}