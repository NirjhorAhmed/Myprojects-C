#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[100],line[100];
    printf("Enter the FILE name: ");
    fgets(str, sizeof(str), stdin);
    getchar();
    FILE *ptr=fopen(str,"w");
    if(ptr==NULL){
        printf("Error opening file\n");
        return 1;
    }
    while (1)
    {
        fgets(line,100,stdin);
        if (strcmp(line,"exit\n")==0)
        {
            break;
        }
        
            fprintf(ptr,"%s\n",line);
    }
    fclose(ptr);
    return 0;
}