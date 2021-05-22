#include <stdio.h>

int main(){
    int marks[3][3];
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter the marks of student %d in subject %d:\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
            }
    }
    int k;
        int summ =0;
        printf("enter the student no\n");
        scanf("%d",&k);
    for(int j=0;j<3;j++){
        
        summ+=marks[k-1][j];
        

    }
    printf("the total marks of student %d is: %d\n",k,summ);
    
    
}
    
