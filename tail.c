#include<stdio.h>
int recurcall(int n,int sum){
    if(n==0){
        return sum;
    }
    else{
        return recurcall(n-1,sum+n);
    }
}
int main(){
    int n;
    scanf("%d",&n); 
    printf("%d",recurcall(n,0));
    return 0;  
}