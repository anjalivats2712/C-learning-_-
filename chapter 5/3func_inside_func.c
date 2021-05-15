//every function gets called directly or indirectly from main()
#include <stdio.h>

void goodMorning();
void goodAfternoon();
void goodEvening();

int main(){
    int a;
    goodMorning();
    return 0;
}
void goodMorning(){
    printf("good morning\n");
    goodAfternoon();
}
void goodAfternoon(){
    printf("good afternoon\n");
    goodEvening();
}
void goodEvening(){
    printf("good Evening\n");
}