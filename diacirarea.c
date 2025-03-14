#include<stdio.h>
int diameter(int );
float circumference(int );
float area(int );
int main()
{
    int r;
    printf("Enter the radius of the circle: ");
    scanf("%d",&r);
    printf("The diameter of the circle:%d\n",diameter(r));
    printf("The circumference of the circle:%.2f\n",circumference(r));
    printf("The area of the circle:%.2f\n",area(r));
    return 0;
}

int diameter(int r){
    return 2*r;
}
float circumference(int r){
    return 2*3.14*r;
}
float area(int r){
    return 3.14*r*r;
}   