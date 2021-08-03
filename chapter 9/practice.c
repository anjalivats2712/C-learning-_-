#include <stdio.h>

typedef struct vector{
    int x;
    int y;
}vec;

struct vector sumvecter(vec v1,vec v2){
    struct vector result;//just like we define integers and characters
    result.x=v1.x + v2.x;
    result.y=v1.y + v2.y;
    return result;
    
}//this is a function which returns the value of struct vector

void sumvector(vec v1,vec v2);

int main(){
    struct vector v1,v2,sum;
    v1.x=2;
    v1.y=3;
    v2.x=23;
    v2.y=2;
    // sumvector(v1,v2);
    sum=sumvecter(v1,v2);
    printf("the sum of v1 and v2 is %dx and %dy\n",sum.x,sum.y);
    return 0;
}

void sumvector(vec v1,vec v2){
    int sumx=v1.x+v2.x;
    int sumy=v1.y+v2.y;
    printf("the sum of v1 and v2 is %dx + %dy\n",sumx,sumy);


}
