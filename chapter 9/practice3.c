#include <stdio.h>

struct complex{
    int real,img;
};
void display(struct complex c);

int main(){
    struct complex c[5];
    for(int i=0;i<5;i++){
        printf("enter the real part of c[%d]\n",i);
        scanf("%d",&c[i].real);
        printf("enter the img part of c[%d]\n",i);
        scanf("%d",&c[i].img);
    }
    for(int i=0;i<5;i++){
        display(c[i]);
    }

    return 0;
}

void display(struct complex c){
    printf("the complex no is %d + %di\n",c.real,c.img);
}
