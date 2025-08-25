#include<stdio.h>
#include<string.h>

int vowel(char *str,char *vowels){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'|| str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            vowels[count]=str[i];
            count++;
        }
    }
    return count;   
}

int main(){
    char str[100],vowels[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]=0;
    printf("%d",vowel(str,vowels));
    return 0;
}