#include<stdio.h>

int main()
{
    int k,n,w,sum=0;
    scanf("%d%d%d",&k,&n,&w);
    sum=(w*(w+1)/2)*k;
    int d=sum-n;
    if(d<=0){
        printf("0");
    }
    else{
        printf("%d",d);
    }


}