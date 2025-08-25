#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str1[100],str2[100],line[256];
    printf("Enter the Source File:");
    fgets(str1,100,stdin);
    str1[strcspn(str1, "\n")] = 0; 
    printf("Enter the Destination File:");
    fgets(str2,100,stdin);
    str2[strcspn(str2, "\n")] = 0;
    FILE *source=fopen(str1,"r");
        if(source==NULL){
            printf("ERROR!\n");
            return 1;
        }
    FILE *dest=fopen(str2,"w");
        if(dest==NULL){
            fclose(source);
            printf("ERROR!\n");
            return 1;
        }
        while(fgets(line,256,source)){
            fputs(line,dest);
        }
    
        fclose(source);
        fclose(dest);       

}