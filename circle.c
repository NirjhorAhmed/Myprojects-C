#include<stdio.h>
#include<math.h>
#define PI 3.14159

struct circle{
    int radius;
}c1,c2;

int main(){
    printf("Enter the 1st radius:");
    scanf("%d",&c1.radius);
    printf("Enter the 2nd radius:");
    scanf("%d",&c2.radius);
    printf("Area and Perimeter of 1st circle is %.2f & %.2f",PI*(pow(c1.radius,2)),2*PI*c1.radius);
    printf("\nArea and Perimeter of 2nd circle is %.2f & %.2f",PI*(pow(c2.radius,2)),2*PI*c2.radius);
    return 0;
}