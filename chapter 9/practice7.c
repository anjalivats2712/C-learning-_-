#include <stdio.h>

struct stu_data{
    int roll_no;
    char name[20];
    char school[40];
};
struct clg_data{
    int level;
    char clgg[40];
    struct stu_data stu;
}clg;

typedef struct vector{
int x;
int y;
}vec;


struct vector sumvector(vec v1,vec v2){
    vec result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    return result;
}
int main(){
    //nested structures
    struct clg_data shr;
    shr.level=3;
    strcpy(shr.clgg,"nith");
    shr.stu.roll_no=1;
    strcpy(shr.stu.name,"shravya");
    strcpy(shr.stu.school,"sbss");
    printf("the level of student is %d\n",shr.level);
    printf("the college of student is %s\n",shr.clgg);
    printf("the roll no of the student is %d\n",shr.stu.roll_no);
    printf("the name of the student is %s\n",shr.stu.name);
    printf("the school of the student is %s\n",shr.stu.school);

    vec v1={3,3},v2={4,5};
    vec result=sumvector(v1,v2);
    printf("%d %d",result.x, result.y);

    return 0;
}