#include <stdio.h>

int main(){
    int rating;
    printf("enter the number from 1 to 5\n");
    scanf("%d",&rating);
    switch(rating){
        case 1:
        printf("the rating is 1");
        break;
        case 2:
        printf("the rating is  2");
        break;
        case 3:
        printf("the rating is 3");
        break;
        case 4:
        printf("the rating is 4");
        break;
        case 5:
        printf("the rating is 5");
        break;
        default:
        printf("the rating is invalid");
        break;

    }
}