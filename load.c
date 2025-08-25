#include<stdio.h>

typedef struct { 
    char name[100];
    int id;
    int phone;
    float cgpa;
} student;

void load(student *s){
    FILE *ptr=fopen("info.txt","r");
    if(ptr==NULL){
        printf("File not found\n");
        return;
    }
    int i=0;
    for(i=0;i<5;i++){
        if((fscanf(ptr,"%50[^,],%d,%d,%f",s[i].name,&s[i].id,&s[i].phone,&s[i].cgpa))!=4){
            break;
        }
    }
    for(int j=0;j<i;j++){
        printf("Name: %s\n",s[j].name);
        printf("ID: %d\n",s[j].id);
        printf("Phone: %d\n",s[j].phone);
        printf("CGPA: %.2f\n",s[j].cgpa);
        printf("\n");
    }
    fclose(ptr);
}
int main(){
    student s[5];
    load(s);
    return 0;
}