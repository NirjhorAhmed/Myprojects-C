#include<stdio.h>
#include<string.h>

void uppercase(char *str){
    int i=0,arr[26]={0};
    for(i=0;str[i]!='\0';i++){
        arr[str[i]-'A']=1;
    }
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            printf("%c ",i+'A');
        }
    }
}
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]=0;
    uppercase(str); 
    return 0;
}