# include <stdio.h>

int wrongswap(int a,int b);
void actualswap(int*a,int*b);

int main(){
    //here we will learn pointers
    int a,b;
    a=9;
    int*j=&a;
    int**k=&j;
    printf("the value of a is %d\n",a);
    printf("the value of a is %d\n",*j);
    printf("the address of a is %u\n",&a);
    printf("the address of a is %u\n",j);
    printf("the address of j is %u\n",&j);
    printf("the address of j is %u\n",k);

    //call by value 
    int no1=1,no2=2;
    printf("%d\n",wrongswap(no1,no2));
    printf("%d is no1\n",no1);
    printf("%d is no2\n",no2);
    actualswap(&no1,&no2);
    printf("the value of no1 after actualswap is %d\n",no1);
    printf("the value of no2 after actualswap is %d\n",no2);
    
    return 0;
}

int wrongswap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    return 0;
}

void actualswap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}