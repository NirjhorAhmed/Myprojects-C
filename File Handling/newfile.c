#include<stdio.h>
#include<string.h>

int main(){
    char str[100],str1[100];
    printf("Enter the name of the file: ");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")] = '\0'; 
    printf("Enter what u want to write: ");
    fgets(str1,100,stdin);
    str1[strcspn(str1,"\n")] = '\0';
    FILE *ptr=fopen(str,"w");
    if(ptr==NULL){
        printf("ERROR!");
        return 1;
    }
    fprintf(ptr,"%s",str1);
    fclose(ptr);
    printf("File created successfully.");
    return 0;
}