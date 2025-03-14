//Subtraction of pointers; Homework:
#include <stdio.h>

int main()
{
    int i;
    int d;
    int a[] = { 50, 1, -1, 10, 11};
    int *p = &a[0];
    int *q = &a[4];
    
    printf("\tSubtraction of pointers. Homework:\n");
    
    printf("\n");
    
    printf("address of p: %u\n", p);
    printf("address of q: %u\n", q);
    
    printf("\n");
    d = p - q;
    printf("Difference is: %d\n", d);
    
    *q = 25;
    printf("Array a: \n");
    for(i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    
    printf("Updated value of q is: %d\n", *q);
    
    printf("\n");
    d = q - p;
    printf("Updated difference is: %d\n", d);
    
    printf("\n");
    
    *p = 27;
    printf("Updated array a: \n");
    for(i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    
    printf("\n");
    q = q - 3;
    printf("Updated address of q is: %u\n", q);
    printf("Updated value of q: %d\n", *q);
    
    printf("\n");
    
    p = p + 3;
    printf("Updated address of p is: %u\n", p);
    printf("Updated value of p: %d\n", *p);
    
    printf("\n");
    d = p - q;
    printf("Difference between p and q is: %d\n", d);
    
    printf("\n");
    
    printf("Elements of array a after subtraction: \n");
    for(i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    
}




