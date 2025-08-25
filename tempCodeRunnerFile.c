#include<stdio.h>
#include<string.h>
#include<ctype.h>

void verify(char var[100]){
    int flag=0;
    for(int i=0;var[i]!='\0';i++){
        if(!flag){
            if(isalpha(var[i])||var[i]=='_'){
                printf("%c",var[i]);
                flag=1;
            }
            else if(isalpha(var[i])||var[i]=='_'||isdigit(var[i])){
                printf("%c",var[i]);
            }
        }
    }
    return;
}

int main(){
    char var[100];
    printf("Enter the variable: ");
    fgets(var, sizeof(var), stdin); // Read a string from standard input
    var[strcspn(var,"\n")]='\0';
    verify(var);
    return 0;
}