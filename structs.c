#include<stdio.h>
#include<string.h>

int main()
{
    struct members {
        char name[20];
        int age;
        float salary;
        double ID;
    } s1,s2;   
    //scanf("%s%d%f%lf",s1.name,&s1.age,&s1.salary,&s1.ID);
    //printf("Name:%s, Age:%d, Salary:%f, ID:%lf\n",s1.name,s1.age,s1.salary,s1.ID);
    //scanf("%s%d%f%lf",s2.name,&s2.age,&s2.salary,&s2.ID);
    //printf("Name:%s, Age:%d, Salary:%f, ID:%lf\n",s2.name,s2.age,s2.salary,s2.ID);
    struct members s3={"Rakin",20,85000,2.30041208};
    s2.age=21;
    printf("Name:%s, Age:%d, Salary:%f, ID:%lf\n",s2.name,s2.age,s2.salary,s2.ID);
    strcpy(s3.name,"dibbo");
    printf("Name:%s, Age:%d, Salary:%f, ID:%lf\n",s3.name,s3.age,s3.salary,s3.ID);
    return 0;
}