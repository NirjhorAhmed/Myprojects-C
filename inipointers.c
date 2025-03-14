#include<stdio.h>

int main()
{
    int x,*p=&x,a=10;
    float b=3.14;
    char c='A';
    long long int d=12324525;
    char ch[10]="Hello";

    scanf("%d",&x);
    printf("value of x: %p\n",x);
    printf("value of p: %d\n",*p);
    printf("value of p: %p\n",p);
    printf("value of p: %p\n",&p);
}