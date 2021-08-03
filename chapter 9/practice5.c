#include <stdio.h>

typedef struct date{
    int day;
    int month;
    int year;
}date;

int cmpp(date d1,date d2);

int main(){
    date d1,d2;
    printf("enter the day for d1\n");
    scanf("%d",&d1.day);
    printf("enter the month for d1\n");
    scanf("%d",&d1.month);
    printf("enter the year for d1\n");
    scanf("%d",&d1.year);
    printf("enter the day for d2\n");
    scanf("%d",&d2.day);
    printf("enter the month for d2\n");
    scanf("%d",&d2.month);
    printf("enter the year for d2\n");
    scanf("%d",&d2.year);
    if (d1.year>d2.year){
        printf("d2 is earlier than d1\n");
    }
    else if (d1.year==d2.year){
        if (d1.month>d2.month){
            printf("d2 is earlier than d1\n");
        }
        else if(d1.month==d2.month){
            if (d1.day>d2.day){
                printf("d2 is earlier than d1\n");
            }
            else if(d1.day==d2.day){
                printf("d1 and d2 are the same dates\n");
            }
            else {
                printf("d1 is earlier than d2\n");
            }
        }
        else{
            printf("d1 is earlier than d2\n");
        }
    }
    else{
        printf("d1 is earlier than d2\n");
    }

    int a=cmpp(d1,d2);
    if(a==-1){
        printf("d1 is earlier than d2\n");
    }
    else if(a==1){
        printf("d2 is earlier than d1\n");
    }
    else if (a==0){
        printf("d1 and d2 are the same dates\n");
    }
    return 0;
}

int cmpp(date d1,date d2){
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month){
        return -1;
    }
    if(d1.day>d2.day){
        return 1;
    }
    if(d1.day<d2.day){
        return -1;
    }
    return 0;
    
}