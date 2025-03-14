#include<stdio.h>
#include<math.h>
int strong(int );
int fact(int );
int main()
{
  int n,r;
  scanf("%d %d",&n,&r);
  for(int i=n;i<=r;i++){
    if(strong(i)){
        printf("%d\n",i);
    }
    else{
        continue;
    }
  }
}

int strong(int n){
    int sum=0,i,a[100];
     while(n>0){
        int digit=n%10;
        a[i]=digit;
        n=n/10;
    }
    for(int j=0;j<=i;j++){
       sum+=fact(a[j]);
    }
}
int fact(int a)
{
    int sum=1;
   for(int i=1;i<=a;i++){
    sum*=i;
   }
   return sum;
}