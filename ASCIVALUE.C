#include<stdio.h>
void ascii(char str[][100],int n){
    
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;str[i][j]!='\0';j++){
            sum+=str[i][j];
        }
        printf("%d\n",sum);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    char str[n][100];
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    ascii(str,n);
}