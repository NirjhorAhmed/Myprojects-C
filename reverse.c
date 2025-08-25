#include<stdio.h>

void reverse(char *str){
    if(*str){
        reverse(str+1);
        printf("%c",*str);
    }
}

int main(){
    char str[100];
    fgets(str,100,stdin);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
        i++;
    }
    reverse(str);
    return 0;
}