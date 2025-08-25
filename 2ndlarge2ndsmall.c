#include<stdio.h>
#include<limits.h>

int findsecondlargest(int *arr,int size){
    int max=arr[0],temp=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            temp=max;
            max=arr[i];
        }
        else if(arr[i]>temp && arr[i]!=max){
            temp=arr[i];
        } 
    }
    return temp;
}

int findsecondsmallest(int *arr,int size){
    int min=arr[0],temp=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            temp=min;
            min=arr[i];
        } 
        else if(arr[i]<temp && arr[i]!=min){
            temp=arr[i];
        }
    }
    return temp;
}   

void printarray(int *arr, int size)
{   
    printf("Array: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printarray(arr, size);
    printf("\n%d\n",findsecondlargest(arr, size));  
    printf("%d\n",findsecondsmallest(arr, size));
    return 0;
}