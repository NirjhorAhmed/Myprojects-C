#include<stdio.h>
#define max 100

int main(){
    int arr[max][max];
    int height, width ;
    scanf("%d %d", &height, &width);
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}