#include<stdio.h>

int main()
{
    int a[10]={12,-6,8,5,7,1,9,3,2,0};
    int *p=a;
    printf("%d ",++*p);
    printf("%d ",*++p);
    printf("%d ",*p++);
    printf("%d ",*(p)++);
    printf("%d ",(*p)++);
    printf("%d ",--*p);
    printf("%d ",*--p);
    printf("%d ",*p--);
    printf("%d ",*(p)--);
    printf("%d\n",(*p)--);
    int q[]={12,-6,8,5,7,1,9,3,2,0};
    int *x=q,*y;
    printf("%d\n",*x);
    printf("%d%d%d\n",(*x)++,*x++,*++x);
    y=x+3;
    printf("%d\n",*y-3);
    printf("%d\n",*--x+5);
    printf("%d\n",*x+*y);
}