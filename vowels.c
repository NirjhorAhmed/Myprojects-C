#include<stdio.h>
#include<string.h>

int vowel(char str[]){
    int i,c=0;
    for(i=0;i<strlen(str);i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            c++;
        }
    }
    return c;
}

int main(){
    char str[100];
    fgets(str,100,stdin);
    printf("%d",vowel(str));
    return 0;
}   