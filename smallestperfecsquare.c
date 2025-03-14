#include<stdio.h>
int power(int ,int );
int smallestperfectsquare(int );

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", smallestperfectsquare(n));
    return 0;
}

int smallestperfectsquare(int n){
    int root=1;
    while(power(root,2)<=n)
        root++;

    return power(root,2);
}

int power(int a,int b){
    int result=1;
    while(b--){
        result*=a;
    }
    return result;
}