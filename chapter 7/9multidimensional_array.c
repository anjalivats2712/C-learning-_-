#include <stdio.h>

int main(){
    int marks[3][5];
    int n_student=3;
    int n_subject=5;
    for (int i=0;i<n_student;i++){
        for(int j=0;j<n_subject;j++){
            printf("enter the marks of student %d in subject %d:\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    for (int i=0;i<n_student;i++){
        for(int j=0;j<n_subject;j++){
            printf("the marks of student %d in subject %d is %d\n",i+1,j+1,marks[i][j]);
        }}
    return 0;
}