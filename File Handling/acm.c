#include<stdio.h>

int main()
{
    int n,k,count=0;
    scanf("%d %d", &n, &k);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(5-k >= a[i])
        {
            count++;
        }
    }
    printf("%d\n", count / 3);
    return 0;
}