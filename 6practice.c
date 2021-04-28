# include <stdio.h>

int main(){
    int a = 2;
    int b = 5;
    printf("the area of rectangle is %d \n",a*b);
    int c,d;
    printf("enter the first side\n");
    scanf("%d", &c);
    printf("enter the scnd side\n");
    scanf("%d", &d);
    printf("the area of rectangle2 is %d \n",c*d);
    float pi=3.14;
    int r,h;
    printf("enter the value of radius\n");
    scanf("%d",&r);
    printf("enter the value of height\n");
    scanf("%d",&h);
    printf("the area of the circle is %f \n",pi*r*r );
    printf("the volume of the cylinder is %f \n",pi*r*r*h);
    
    return 0;//zero means success in coding language
}