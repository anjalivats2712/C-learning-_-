#include <stdio.h>
void wishing();
void wishing2();
void avg(int a,int b);
void change(int e);




int main(){
    int a=3;
    wishing();
    avg(3,4);
    int f=3;
    printf("\nthe value of a before calling change is %d\n",f);
    change(f);
    printf("the value of a after calling change is %d\n",f);
    
    return 0;

   
}
void wishing(){
    printf("happy bday\n");
    wishing2();
}
void wishing2(){
    printf("kartik");
}
void avg(int a,int b){
    int c= a+b;
    if((c)%2==0){
        printf("\nthe avg of a and b is %d",(c)/2);
    }
    else{
        printf("\nthe avg of a and b is %0.1f",(float)(c)/2);
    }

}
void change(int e){
    e=77;

}