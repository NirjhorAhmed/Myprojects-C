#include<stdio.h>
#include<stdlib.h>


typedef struct {
    int num;
    int denom;
} Fraction;


Fraction createfraction(int num,int denom){
    Fraction result;
    if(denom<0){
        result.num=-num;
        result.denom=-denom;
        return result;
    }
    else if(denom==0){
        printf("Error: Denominator cannot be zero.\n");
        result.num=num;
        result.denom=1; 
        return result;
    }
    else{
    result.num=num;
    result.denom=denom;
    return result;
    }
}


int gcd(int a, int b) {
    if (b == 0)
    return abs(a);
    return gcd(b, a % b);
    }


Fraction addFractions(Fraction f1,Fraction f2){
    Fraction result;
    int common;
    result.num=(f1.num*f2.denom)+(f2.num*f1.denom);
    result.denom=f1.denom*f2.denom;
    common=gcd(f1.denom,f2.denom);
    result=createfraction(result.num/common,result.denom/common);
}


Fraction Multiplyfractions(Fraction f1,Fraction f2){
    Fraction result;
    result.num=f1.num*f2.num;
    result.denom=f1.denom*f2.denom;
    int common=gcd(result.num,result.denom);
    return createfraction(result.num/common,result.denom/common);
}


float todecimal(Fraction f1){
    float result;
    result=(float)f1.num/(float)f1.denom;
    return result;
}


int main(){
    int choice,num1,num2,denom1,denom2;
    printf("===== Fraction Calculator =====\n");
    printf("Add fractions\nMultiply fractions\nConvert fraction to decimal\nExit");
    printf("\nEnter your choice:");
    scanf("%d", &choice);
    Fraction f1,f2,result;
    switch(choice){
        case 1:
            printf("Enter first fraction:\n");
            printf("Numerator: ");
            scanf("%d", &f1.num);          
            printf("Denominator: ");
            scanf("%d", &f1.denom);
            f1=createfraction(f1.num,f1.denom);
            printf("Enter second fraction:\n");
            printf("Numerator: ");
            scanf("%d", &f2.num);
            printf("Denominator: ");
            scanf("%d", &f2.denom);
            f2=createfraction(f2.num,f2.denom);
            Fraction result=addFractions(f1,f2);
            printf("Result: %d/%d\n", result.num, result.denom); 
            break;  

            case 2:
            printf("Enter first fraction:\n");
            printf("Numerator: ");
            scanf("%d", &f1.num);          
            printf("Denominator: ");
            scanf("%d", &f1.denom);
            f1=createfraction(f1.num,f1.denom);
            printf("Enter second fraction:\n");
            printf("Numerator: ");
            scanf("%d", &f2.num);
            printf("Denominator: ");
            scanf("%d", &f2.denom);
            f2=createfraction(f2.num,f2.denom);
            result=Multiplyfractions(f1,f2);
            printf("Result: %d/%d\n", result.num, result.denom);
            break;

            case 3:
            float value=0;
            printf("Enter fraction:\n");
            printf("Numerator: ");
            scanf("%d", &f1.num);
            printf("Denominator: ");
            scanf("%d", &f1.denom);
            f1=createfraction(f1.num,f1.denom); 
            value=todecimal(f1);
            printf("%d/%d = %.2f\n", f1.num,f1.denom,value);
            break;

            case 4:
            printf("Thank you for using the Fraction Calculator!\n");
            break;  

            default:
            printf("Invalid choice. Please try again.\n");
            break;
    }
             return 0;    
            
}