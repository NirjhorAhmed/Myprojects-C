#include<stdio.h>

int main(){
    typedef struct student{
        char name[100];
        int id;
        int phone;
        float cgpa;
    }student;
    
    student s[100];
    FILE *ptr=fopen("info.txt","r");
    if(ptr==NULL){
        printf("Error opening file\n");
        return 1;
    }
    int i=0;
    while(fscanf(ptr,"%99[^,],%d,%d,%f\n",&s[i].name,&s[i].id,&s[i].phone,&s[i].cgpa)==4){
        i++;
    }
    fclose(ptr);
    for(int j=0;j<i;j++){
        printf("Name: %s\n",s[j].name);
        printf("ID: %d\n",s[j].id);
        printf("Phone: %d\n",s[j].phone);
        printf("CGPA: %.2f\n",s[j].cgpa);
    }
    return 0;
}