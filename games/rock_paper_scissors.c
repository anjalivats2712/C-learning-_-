#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rules(char you,char comp);
int main(){
    int n;
    char comp,you;
    
    
    while(you!='q'){
        srand(time(0));
        n=rand()%3+1;
        if(n==1){
        comp='p';
        }
        else if(n==2){
            comp='r';
        }
        else if(n==3){

            comp='s';
        }
        printf("you can choose rock(r),paper(p) or scissors(s) or press q to quit\n");
        scanf(" %c",&you);
        if(you=='q'){
            printf("thanku for playing");
            break;
        }
        int i=rules(you,comp);
        printf("the comp choose %c you choose %c\n",comp,you);
        if(i==0){
            printf("the game is draw\n");
        }
        else if(i==1){
            printf("you win! good job\n");
        }
        else{
            printf("you lost!");
        }
        
    }
    
    return 0;
}

int rules(char you,char comp){
    if(you==comp){
        return 0;
    }
    else if(you=='r'&&comp=='s'){
        return 1;
    }
    else if(you=='s'&&comp=='p'){
        return 1;
    }
    else if(you=='p'&&comp=='r'){
        return 1;
    }
    else{
        return -1;
    }
}
