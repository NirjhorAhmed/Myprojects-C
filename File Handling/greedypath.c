#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);
    int **arr = (int **)malloc(n * sizeof(int *));
    for(int i=0;i<n;i++){
        arr[i]=(int *)malloc(n * sizeof(int));
        for(int j=0;j<n;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        int count = 0;  
        for(int j=0;j<n;j++){
            count+= arr[i][j];
        }
            if(count>=5){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
    for(int i=0;i<n;i++){
        free(arr[i]);
    }
    free(arr);
    
        return 0;

}