//if the passed variable is changed variable inside the function,the func call doesn't
//change the value in the calling function

#include <stdio.h>
int change(int a);//misnomer here as it doesnt actually chnge the values
int main(){
    int b=22;
    change(b);
    printf("the value of b is %d",b);//prints 22
    return 0;
}
int change(int a){
    a=77;
    return 0;

}
//this is because a copy of b is passed to the change function