#include<stdio.h>

struct complex{
    float real;
    float imag;
}c1,c2;

struct complex sum(struct complex a,struct complex b){
    struct complex result;
    result.real=a.real+b.real;
    result.imag=a.imag+b.imag;
    return result;
}

struct complex mul(struct complex a,struct complex b){
    struct complex result;
    result.real=a.real*b.real-a.imag*b.imag;
    result.imag=a.real*b.imag+a.imag*b.real;
    return result;
}

void print(struct complex result){
    if(result.imag>=0){
        printf("%.2f + %.2fi\n",result.real,result.imag);
    }
    else{
        printf("%.2f - %.2fi\n",result.real,-result.imag);

    }
}

int main()
{
    printf("Enter the 1st complex number: ");   
    scanf("%f %f", &c1.real, &c1.imag);
    printf("Enter the 2nd complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);
    printf("Summation of complex numbers: ");
    print(sum(c1,c2));
    printf("Multiplication of complex numbers: ");
    print(mul(c1,c2));
    return 0;
}