#include<stdio.h>

int max(int a[],int n);
int min(int a[],int n);

int main()
{
    int n,a[n],i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The maximum element is: %d\n",max(a,n));
    printf("The minimum element is: %d\n",min(a,n));
    return 0;
}

int max(int a[],int n)
{
    int i,max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i+1];
        }
    }
    return max;
}

int min(int a[],int n)
{
    int i,min=a[0];
    for(i=0;i<n-1;i++){
        if (a[i]<min){
            min=a[i];
        }
    }
    return min;
}
