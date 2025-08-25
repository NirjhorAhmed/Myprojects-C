#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
    char str[100];
    printf("Enter the file name: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]='\0'; 
    int n;
    printf("Enter the number of lines to write: ");
    scanf("%d", &n);
    getchar(); 
    FILE *ptr=fopen(str,"w");
    char *arr[n];
    if(ptr==NULL){
        printf("Error!");
        exit(1);
    }
    for(int i=0;i<n;i++){
        arr[i]=(char *)malloc(100*sizeof(char));
        printf("Enter line %d: ", i+1);
        fgets(arr[i], 100, stdin);
        arr[i][strcspn(arr[i],"\n")]='\0';
        fprintf(ptr,"%s\n",arr[i]);
    }
    fclose(ptr);
    return 0;

}