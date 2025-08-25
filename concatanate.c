#include<stdio.h>

void concat(char str[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s",str[i]);
    }
}

int main(){
    int n;
    char str[n][100];
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    printf("Enter the strings: ");
    for(int i=0; i<n; i++){
        scanf("%s", str[i]);
    }
    concat(str,n);
    return 0;
}