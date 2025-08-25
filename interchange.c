#include<stdio.h>

void interchange(int n,int arr[][n]){
    for(int i=0;i<n;i++){
        int temp=arr[i][i];
        arr[i][i]=arr[i][n-i-1];
        arr[i][n-i-1]=temp;
    }
}

void print(int n,int arr[][n]){
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the nth square dimension: ");
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("Enter the element at position (%d, %d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The original matrix is: \n");
    interchange(n,arr);
    print(n,arr);
}