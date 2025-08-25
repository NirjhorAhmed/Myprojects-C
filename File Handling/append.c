#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter the name of the file: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 
    FILE *ptr=fopen(str,"r");
    if(ptr==NULL){
        printf("File does not exist\n");
        return 0;
    }
    while(fgets(str,100,ptr)){
        printf("%s",str);
    }
    fclose(ptr);
    return 0;
}