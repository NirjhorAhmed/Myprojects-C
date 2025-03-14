#include<stdio.h>

int main(){
    struct student{
        char name;
        int age;
        int totalmarks;
    }s1,s2;
    scanf("%s%d%d",&s1.name,&s1.age,&s1.totalmarks);
    scanf("%s%d%d",&s2.name,&s2.age,&s2.totalmarks);
    int avg=(s1.totalmarks+s2.totalmarks)/2;
    printf("Average marks:%d\n",avg);
    printf("Name:%s, Age:%d, Totalmarks:%d\n",s1.name,s1.age,s1.totalmarks);
    printf("Name:%s, Age:%d, Totalmarks:%d\n",s2.name,s2.age,s2.totalmarks);
    return 0;
}

