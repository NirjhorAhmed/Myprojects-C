#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[100];
    int j=0,k=0,up=0,low=0;
    scanf("%s", str);
    int l=strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]>='A' && str[i]<='Z'){
            up++;
        }
        else if(str[i]>='a' && str[i]<='z'){
            low++;
        }
    }
    if(up>low){
        for(int i=0;str[i]!='\0';i++){
            str[i]=toupper(str[i]);
        }
    }
    else if(low>up){
        for(int i=0;str[i]!='\0';i++){
            str[i]=tolower(str[i]);
        }
    }
    else if(up==low){
        for(int i=0;str[i]!='\0';i++){
            str[i]=tolower(str[i]);
        }
    }
    printf("%s", str);
    return 0;
}