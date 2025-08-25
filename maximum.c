#include<stdio.h>

int maxmin(int *arr,int n,int *max,int *min){
    *max=arr[0],*min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>*max){
            *max=arr[i];
        }
        else if(arr[i]<*min){
            *min=arr[i];
        }
    }
}
int main(){
    int n,arr[n],max,min;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
   maxmin(arr,n,&max,&min);
    printf("Max: %d\nMin: %d", max,min);
   return 0;     
}