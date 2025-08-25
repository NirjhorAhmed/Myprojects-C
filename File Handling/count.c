#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    int inword=0,wordcount=0;
    char ch,str[100];
    printf("Enter the name of the file: ");
    scanf("%s",str);
    FILE *ptr=fopen(str,"r");
    if(ptr==NULL){
        printf("ERROR!");
        return 0;
    }
    while((ch=fgetc(ptr))!=EOF){
        if(isspace(ch)){
            inword=0;
        }
        else if(inword==0){
            inword=1;
            wordcount++;
        }
    }
    fclose(ptr);
    printf("The number of words in the file is: %d\n",wordcount);
    return 0;
}