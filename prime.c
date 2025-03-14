#include<stdio.h>
#include<math.h>

int prime(int );
int main()
{
    int n,r;
    scanf("%d %d",&n,&r);   
    for(int i=n;i<=r;i++){
        if(prime(i)){
            printf("%d ",i);
        }
    }
}
    int prime(int n){
        if(n==1||n==0||n<2){
            return 0;
        }
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }   
