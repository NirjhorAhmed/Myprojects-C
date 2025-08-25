#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>  

void namer(char first[100],char last[100]){
    for(int i=0;first[i]!='\0';i++){
        if(first[i]!='a' && first[i]!='e' && first[i]!='i' && first[i]!='o' && first[i]!='u' && first[i]!='A' && first[i]!='E' && first[i]!='I' && first[i]!='O' && first[i]!='U'){
            printf("%c",first[i]);
        }
    }
    printf("\n");
    for(int j=0;last[j]!='\0';j++){
        if(last[j]>=65 && last[j]<=90){
            printf("%c",last[j]);
        }
        else{
            char upper=toupper(last[j]);
            printf("%c",upper);
        }
    }
}
int main(){
    char firstname[100],lastname[100];
    printf("Enter your first name: ");
    scanf("%s",firstname);
    printf("Enter your last name: ");
    scanf("%s",lastname);
    namer(firstname,lastname);
    return 0;
}