#include<stdio.h>
#include<string.h>

int count(char *str1,char *str2){
    int a[26]={0},i=0,count=0;
    for(i=0;str1[i]!='\0';i++){
        a[str1[i]-'A']=1;
    }
    for(i=0;str2[i]!='\0';i++){
        a[str2[i]-'A']=1;
    }
    for(i=0;i<26;i++){
        if(a[i]==1){
            count++;
        }
    }
    return count;
}
int main(){
    char str1[100],str2[100];
    printf("Enter the first string: ");
    fgets(str1,100,stdin);
    str1[strcspn(str1,"\n")]=0;
    printf("Enter the second string: ");
    fgets(str2,100,stdin);
    str2[strcspn(str2,"\n")]=0;
    printf("%d",count(str1,str2));
    return 0;
}