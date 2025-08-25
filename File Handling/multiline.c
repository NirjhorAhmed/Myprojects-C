#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100],line[100];
    printf("Enter the name of the file: ");
    scanf("%s",str);
    FILE *ptr=fopen(str,"w");
    if(ptr==NULL){
        printf("ERROR!");
        return 1;
    }
    printf("Enter ur text :\n");
    while(1){
        fgets(line,100,stdin);
        if(strcmp(line,"Exit")==0){
            break;
        }
        fprintf(ptr,"%s\n",line);
    }
    fclose(ptr);

    printf("The file is created successfully.\n");
}