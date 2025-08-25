#include<stdio.h>
#include<math.h>

int main(){
    int n,count=0;
    scanf("%d", &n);
    int arr[n],brr[n];
    for(int i = 0; i < n; i++){
        scanf("%d %d", &arr[i],&brr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i] == brr[j]){
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
