#include<stdio.h>

int even(int a[],int n);

int main(){
    int n,a[n],i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    even(a,n);
    return 0;
}

int even(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            printf("Even: %d ",a[i]);
        }
        else{
            printf("Odd: %d ",a[i]);
        }
    }
}