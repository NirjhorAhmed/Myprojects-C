#include<stdio.h>

int main(){
    int a=10,b=20,arr[9]={2,4,7,8,9,1,5,6,7};
    int *ptr,*ptr1=&arr[0],n;
    ptr=&a;
    ptr=&b;
    printf("value of b:%d\n",*ptr);
   // printf("%p\n",*ptr);Wrong
    printf("Address of x:%p\n",ptr);
    printf("%x\n",(void*)ptr);
    int *p,*q;
   // p=&a;
   // q=&b;
   // *p=*q;
   // printf("value of p:%d\n",*q);
    printf("Enter the value of n:");
    scanf("%d",&n);
    ptr1=ptr1+n;
    ptr1++;
    printf("value of ptr1:%d\n",*ptr1);
        // Correct way to print a pointer
        printf("Using %%p: %p\n", (void*)ptr);

        // Alternative: Convert pointer to unsigned long and print as hex
        printf("Using %%lx: %lx\n", (unsigned long)ptr);
       *p=&arr[0];
       *q=&arr[3];
        int d=p-q;
        printf("value of d:%d\n",d);
        printf("value of p:%d\n",*p);
        printf("value of q:%d\n",*q);
}