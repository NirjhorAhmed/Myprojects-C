#include<stdio.h>

void swap(int * ,int *);

int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    printf("Before swapping: n1=%d n2=%d\n",n1,n2);
    swap(&n1,&n2);
    printf("After swapping: n1=%d n2=%d\n",n1,n2);
    return 0;
}

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}