#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100 +1;
    do{
        printf("guess the number btw 1 and 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("lower number plz\n");
        }
        else if(guess<number){
            printf("higher number plz\n");
        }
        else{
            printf("the number of guesses is %d\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);
    return 0;



}