#include<stdio.h>

void lexio(char names[][100],int n){
    char *organizer=names[0];
    for(int i=1;i<n;i++){
        if(strcmp(names[i],organizer)<0){
            organizer=names[i];
        }
    }
    printf("The organizer is: %s\n", organizer);
}

int main(){
    int n;
    printf("Enter the number of participants: ");
    scanf("%d", &n);
    char names[n][100];
    lexio(names,n);
    return 0;
}