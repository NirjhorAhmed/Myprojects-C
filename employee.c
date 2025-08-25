#include<stdio.h>
#include<stdlib.h>

struct employee{
    int ID;
    char name[50];
    int salary;
};

int main()
{
    int n;
    scanf("%d",&n);
    struct employee *employed =(struct employee*)malloc(n*sizeof(struct employee));
    for(int i=0;i<n;i++){
        scanf("%d",&employed[i].ID);
        scanf("%s",&employed[i].name);
        scanf("%d",&employed[i].salary);
    }
    struct employee mostexpensive=employed[0];
    for(int i=1;i<n;i++){
        if(employed[i].salary>mostexpensive.salary){
            mostexpensive=employed[i];
        }
    }
    printf("Employee with the highest salary is %s",mostexpensive.name);
    free(employed);
    return 0;
}