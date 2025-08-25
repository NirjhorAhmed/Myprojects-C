#include<stdio.h>
#include<math.h>

int main(){
    long long n;
    int l=0;
    scanf("%lld",&n);
    for(int i=0;n>0;i++){
        if(n%10==7||n%10==4){
            l++;
        }
        n/=10;
    }
    if(l==4||l==7){
        printf("YES");
    }
    else{
        printf("NO");
    }
}