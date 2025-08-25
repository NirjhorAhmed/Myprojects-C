#include<stdio.h>

int absolute(int n){
   if(n<0){
         return -n;
   }
   return n;
}

int adjacent(int n){
     
}

int immediate(int n){
    if(n==0){
        return 1;
    }
    n--;
    for(int i=1;i<32;i<<=1){
        n|=n>>i;
    }
    return n+1;
}
typedef struct{
    int a;
    int b;
}p;

int main()
{
    int n;
    scanf("%d", &n);
    p arr[n];
    for(int i=0;i<n;i++){
        scanf("%d %d", arr[i].a,arr[i].b);
        if(arr[i].a==1){
            immediate(arr[i].b);    
        }
        else if(arr[i].a==2){
            absolute(arr[i].b);
        }
        else if(arr[i].a==3){
            adjacent(arr[i].b);
        }
        else if(arr[i].a==4){
            not(arr[i].b);
        }
    }
    return 0;
}