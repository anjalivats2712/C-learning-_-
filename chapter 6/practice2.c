#include <stdio.h>

int tentimes(int*i);
int main(){
    int a = 50;
    
    printf("the value of a before calling is %d\n",a);
    tentimes(&a);
    printf("the value of a before calling is %d\n",a);

    

}
int tentimes(int*i){
    (*i)*=10;
}