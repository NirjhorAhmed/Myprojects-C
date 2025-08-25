#include<stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct{
    char name[20];
    int ml;
    int ds;
    int n;
    int total;
}s;

int compare(const void *a,const void *b)
{
    s *x = (s *)a;
    s *y = (s *)b;

    if (y->total != x->total)
        return y->total - x->total;

    if (y->ml != x->ml)
        return y->ml - x->ml;

    if (y->ds != x->ds)
        return y->ds - x->ds;

    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    s a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d", a[i].name, &a[i].ml, &a[i].ds, &a[i].n);
        a[i].total = a[i].ml + a[i].ds + a[i].n;
    }
    qsort(a,n,sizeof(s),compare);
     for(int i = 0; i < n; i++)
    {
          printf("%d %s\n", i + 1, a[i].name);
    }
}