#include<stdio.h>

void print(int arr[],int size){
    int first=arr[0];
    int last=arr[size-1];
    for(int i=0;i<size;i++){
        if(arr[i]%first==0 && arr[i]%last==0){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    print(arr,size);
    return 0;
}