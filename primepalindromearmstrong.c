#include<stdio.h>
#include<math.h>


int prime(int n);
int palindrome(int n);
int armstrong(int n);

int main(){
    int n;
    scanf("%d", &n);
    if(prime(n)){
        printf("The number %d is  prime",n);
    }
    else{
        printf("The number %d is not prime",n);
    }
    if(palindrome(n)){
        printf("\nThe number %d is palindrome",n);
    }
    else{
        printf("\nThe number %d is not palindrome",n);
    }
    if(armstrong(n)){
        printf("\nThe number %d is armstrong",n);
    }
    else{
        printf("\nThe number %d is not armstrong",n);
    }
    return 0;
}

int prime(n){
    int i;
    for(i=0;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}

int palindrome(n){
    int rev=0,i;
    for(;n>0;){
        int lastdigit=n%10;
        rev=rev*10+lastdigit;
        n=n/10;
}
    if(n==rev){
        return 1;
    }
    else{
        return 0;
    }
}