#include<stdio.h>

int main(){
    typedef struct student{
        char name[100];
        int phone;
        float cgpa;
    }student;
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    student s[n];
    for(int i=0;i<n;i++){
        printf("Enter the name of student %d:",i+1);
        scanf("%s",s[i].name);
        printf("Enter the phone number of student %d:",i+1);
        scanf("%d",&s[i].phone);
        printf("Enter the cgpa of student %d:",i+1);
        scanf("%f",&s[i].cgpa);
    }
    printf("The details of the students are:\n");
    for(int i=0;i<n;i++){
        printf("%s %d %.2f\n",s[i].name,s[i].phone,s[i].cgpa);
    }
return 0;
}