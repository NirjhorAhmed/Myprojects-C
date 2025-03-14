#include<stdio.h>
#include<math.h>
void multiplyarray(int arr[],int ,int );
void printarray(int arr[], int );

int main()
{
    int size,factor;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&factor);
    multiplyarray(arr,size,factor);
   
}

void multiplyarray(int arr[],int size,int factor){
    for(int i=0;i<size;i++){
        arr[i]=arr[i]*factor;
    }
    printarray(arr,size);
}

void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}