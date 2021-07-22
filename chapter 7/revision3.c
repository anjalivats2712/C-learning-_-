#include <stdio.h>

int main(){
    int arr[3][2]={{3,2},
    {3,4},{5,4}};
    int marks[3][5];
    int n_student=3,n_subject=5;
    for(int i=0;i<n_student;i++){
        for(int j=0;j<n_subject;j++){
            printf("enter the marks of student %d in subject %d\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    // for(int i=0;i<n_student;i++){
    //     for(int j=0;j<n_subject;j++){
    //         printf("the marks of student %d in subject %d is %d\n",i+1,j+1,marks[i][j]);
            
    //     }
    // }
    int student,subject;
    printf("enter the student rollno\n");
    scanf("%d",&student);
    printf("enter the subject no\n");
    scanf("%d",&subject);
    printf("the marks of student %d in subject %d is %d\n",student,subject,marks[student-1][subject-1]);
    return 0;
}