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
    char room;
    printf("\nenter the room code\n");
    scanf(" %c",&room);
    switch(room){
        case 'A':
        printf("ROOM IS A");
        break;
        case 'B':
        printf("ROOM IS B");
        break;
        case 'C':
        printf("ROOM IS C");
        break;
        case 'D':
        printf("ROOM IS D");
        break;
        case 'E':
        printf("ROOM IS E");
        break;
        default:
        printf("invalid room no.");
        break;
    }
}