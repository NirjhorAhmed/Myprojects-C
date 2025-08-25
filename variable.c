#include<stdio.h>
#include<string.h>
#include<ctype.h>

void verify(char var[100]){
    int flag=0;
    for(int i=0;var[i]!='\0';i++){
        if(!flag){
            if(isalpha(var[i]) || var[i]=='_'){
                flag=1;
                printf("%c",var[i]);
            }
        }
        else if(isalpha(var[i]) || var[i]=='_'||isdigit(var[i])){
            printf("%c",var[i]);
        }
    }
}
int main(){
    char var[100];
    printf("Enter the variable: ");
    fgets(var, sizeof(var), stdin); 
    var[strcspn(var,"\n")]='\0';
    verify(var);
    return 0;
}