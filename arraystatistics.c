#include<stdio.h>
void printarray(int arr[],int size){
    printf("Array: ");
    for(int i=0;i<size;i++){  
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void findstats(int arr[],int size,int *max,int *min,double *avg){
    *max=arr[0];
    *min=arr[0];
    *avg=0;
    for(int i=0;i<size;i++){
        if(arr[i]>*max){
           *max=arr[i];
        }
        else if(arr[i]<*min){
            *min=arr[i];
        }
    }
    for(int j=0;j<size;j++){
        *avg+=arr[j];
    }
    *avg=*avg/size;
}
int main()
{
    int size,max,min;
    double avg;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printarray(arr,size);
    findstats(arr,size,&max,&min,&avg);
    printf("Max: %d\nMin: %d\nAvg: %.2lf",max,min,avg);
    return 0;
}
