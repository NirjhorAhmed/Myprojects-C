#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>



int  blocker(char news[100]){
    int count=0;
    char temp[100];
    strcpy(temp,news);
    char *token=strtok(temp,",. ");
    while(token!=NULL){
        if(strcmp(token,"strike")==0||strcmp(token,"blockade")==0){
            count++;
        }
        token=strtok(NULL,",. ");
    }
    return count;
}

int main(){
    char news[100];
    fgets(news, sizeof(news), stdin);
    news[strcspn(news, "\n")] = 0; 
    for(int i = 0; news[i]; i++){
        news[i] = tolower(news[i]);
    }
    printf("%d",blocker(news));
    return 0;
}