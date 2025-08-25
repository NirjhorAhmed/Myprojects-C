#include<stdio.h>
#define n 1000
typedef struct {
    char name[100];
    int age;
    int id;
} student;

void save(student s[n]){
    FILE *fp = fopen("info.txt","w");
    if(fp == NULL){
        printf("Error opening file!\n");
        return;
    }
    for(int i=0;i<n;i++){
        fprintf(fp,"%s,%d,%d\n",s[i].name,s[i].age,s[i].id);
    }
    fclose(fp);
    printf("Data saved successfully!\n");
}

int main(){
    student s[n];
    for(int i=0;i<n;i++){
        sprintf(s[i].name,"student%d",i+2);
        s[i].age = 20 + (i % 10); 
        s[i].id = i + 1;    
    }    
    save(s);
}