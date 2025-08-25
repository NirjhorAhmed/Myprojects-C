#include<stdio.h>

float answer(char *ques,char *ans){
    int count=0;
    for(int i=0;ques[i]!='\0';i++){
        if(ques[i]==ans[i]){
            count++;
        }
        else if(ques[i]=='x'){
            count--;
        }
        else{
            count=count-1.25;
        }
    }
    return count;
}
int main(){
    char ques[10]="adcdabacdb";
    char ans[10]="axbxcxdxcb";
    printf("%d",answer(ques,ans));
    return 0;
}