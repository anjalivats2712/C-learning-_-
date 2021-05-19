#include <stdio.h>

int summ(int*a,int*b);
float average(int*a,int*b);
int main(){
    int a=4,b=5;
    printf("The sum of a and b is %d\n",summ(&a,&b));
    // float c=average(&a,&b);
    // printf("The average of a and b is %0.1f\n",c);
    printf("The average of a and b is %0.1f\n",average(&a,&b));
    


}
int summ(int*a,int*b){
    return (*a)+(*b);
}
float average(int*a,int*b){
    return (float)((*a)+(*b))/2;
}