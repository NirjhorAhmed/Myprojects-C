#include<stdio.h>

unsigned long long factorial(int );
unsigned long long nCr(int , int );
unsigned long long nPr(int , int );

int main(){
    int n,r;
    scanf("%d %d",&n,&r);
    printf("%llu\n",nCr(n,r));  
    printf("%llu\n",nPr(n,r));
    return 0;
}

unsigned long long factorial(int n){
    int result=1;   
    for(int i=1;i<=n;i++){
        result*=i;
    }
    return result;
}

unsigned long long nCr(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

unsigned long long nPr(int n,int r){
    return factorial(n)/factorial(n-r);
}