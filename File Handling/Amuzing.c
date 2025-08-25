#include<stdio.h>
#include <stdlib.h>

int main(){
    char str1[100], str2[100],str3[100];
    scanf("%s %s %s", str1, str2, str3);
    int alph1[26]={0},alph2[26]={0};
    for(int i=0; str1[i]!='\0'; i++){
        alph1[str1[i]-'A']++;
    }
    for(int i=0; str2[i]!='\0'; i++){
        alph1[str2[i]-'A']++;
    }
    for(int i=0; str3[i]!='\0'; i++){
        alph2[str3[i]-'A']++;
    }
    for(int i=0; i<26; i++){
        if(alph1[i] != alph2[i]){
            printf("NO\n");
            return 0;
        }
    }
       printf("YES\n");
       return 0;
    
    
}