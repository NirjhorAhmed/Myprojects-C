#include<stdio.h>

int occurences(int rows,int cols,int arr[rows][cols],int n){
    int count=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==n){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int rows,cols,n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&rows,&cols);
    int arr[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Count of occurences of a element in the matrix is: \n");
    scanf("%d",&n);
    printf("%d",occurences(rows,cols,arr,n));
    return 0;
}