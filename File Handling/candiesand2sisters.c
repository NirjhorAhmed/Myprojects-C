#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,a,b,i;
    scanf("%d",&n);
    int *arr = (int *)malloc(n * sizeof(int));
    int *count=(int *)malloc(n * sizeof(int));
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
        count[i] = 0;
    }
    for(i = 0; i < n; i++){
        b=(arr[i]-1)/2;
        a=arr[i]-b;
        while(b!=0){
            if(b>=1){
                count[i]+=1;
                b-=1;
                a+=1; 
            }
            else{
                break;  
            }
        }
    }
    for(i = 0; i < n; i++){
        printf("%d ", count[i]);
    }
    free(arr);
    free(count);
    return 0;
}