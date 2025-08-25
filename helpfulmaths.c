#include<stdio.h>
#include<string.h>

int main(){
    int j=0;
    char sum[100],s[100];
    scanf("%s",&sum);
    int l=strlen(sum);
    for(int i=0;i<l;i++){
        if(sum[i]=='+'){
            continue;
        }
        else if(sum[i]>'3'){
            break;
        }
        else{
            s[j++]=sum[i];
        }
    }
    for(int i=0;i<j;i++){
        for(int k=0;k<j-i-1;k++){
            if(s[k]>s[k+1]){
                char temp=s[k];
                s[k]=s[k+1];
                s[k+1]=temp;
            }
        }
    }
    for(int i=0;i<j;i++){
        if(i==j-1){
            printf("%c",s[i]);
        }
        else{
            printf("%c+",s[i]);
        }
    }
}