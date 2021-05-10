#include <stdio.h>

 int main(){
     int i=11,j=5;
     do{
         printf("the number is %d\n",i);
         i++;
     }while(i<10);
     
     do{
         printf("the number is %d\n",j);
         j++;
     }while(j<12);
     return 0;
 }
 
 //do while loop is similar to while loop except for the fact
 //while loop:checks the condition & then execute the code
 //do while loop:executes the code & then checks the condition

 //do while loop:while loop which execute at least once