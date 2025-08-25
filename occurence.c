#include<stdio.h>

int occurence(int *arr,int size){
    int count[100]={0};
    for(int i=0;i<size;i++){
        count[arr[i]]++;
    }
    for(int i=0;i<100;i++){
        if(count[i]>0){
            printf("%d occurs %d times\n",i,count[i]);
        }
    }
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    occurence(arr,size);
    return 0;
}