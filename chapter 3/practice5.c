# include <stdio.h>

int main(){
    int a,age;
    char room;
    printf("enter the value of a \n");
    scanf("%d",&a);
    if(a>5){
        printf("a is greater than 5\n");

    }
    else if(a<5){
        printf("a is less than 5\n");
    }
    else{
        printf("a is equal to 5\n");
    }
    printf("enter your age\n");
    scanf("%d",&age);
    if(age>=18&&age<=70){
        printf("you can drive\n");   
    }
    else{
        printf("you cant drive\n");
    }
    (a<5)?printf("a is less than 5 \n"):printf("a is either greater than 5 or equal to 5\n");
    printf("enter the value of room\n");
    scanf(" %c",&room);
    switch(room){
        case 'A':
        printf("the room is %c\n a",room);
        break;
        case 'B':
        printf("the room is %c\n b",room);
        break;
        case 'C':
        printf("the room is %c\n c",room);
        break;
        case 'D':
        printf("the room is %c\n d",room);
        break;
        case 'E':
        printf("the room is %c\n e",room);
        break;
        default:
        printf("the room is invalid\n");
        break;


    }

    return 0;
}