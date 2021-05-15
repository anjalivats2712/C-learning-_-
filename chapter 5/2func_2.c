#include <stdio.h>

void goodMorning();
void goodAfternoon();
void goodEvening();

int main(){
    int a;
    goodMorning();
    goodAfternoon();
    goodEvening();
    
    return 0;
}
void goodMorning(){
    printf("good morning\n");
}
void goodAfternoon(){
    printf("good afternoon\n");
}
void goodEvening(){
    printf("good Evening\n");
}