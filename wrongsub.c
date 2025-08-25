#include<stdio.h>
#include<math.h>

int main()
{
    int k,n;
    scanf("%d %d",&k,&n);    
    for(int i=1;i<=n;i++){
        if(k%10==0){
            k=k/10;
        }
        else{
            k=k-1;
        }
    }
    printf("%d",k);
    return 0;
}