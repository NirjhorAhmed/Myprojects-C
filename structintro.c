#include<stdio.h>

struct student{
    char name[50];
    float marks;
    int roll;
}s2= {"Protick",101,434};
int main()
{
    struct student s1;
    printf("Enter the name , marks and roll of the student:\n");
    scanf("%s%f%d",s1.name,&s1.marks,&s1.roll);
    printf("Name:%s\nMarks:%.2f\nRoll:%d\n",s1.name,s1.marks,s1.roll);
    //struct student s2={"Protick",56.43,101};
    s1=s2;
    printf("Name:%s\nMarks:%.2f\nRoll:%d\n",s2.name,s2.marks,s2.roll);
    printf("Name:%s\nMarks:%.2f\nRoll:%d\n",s1.name,s1.marks,s1.roll);
}