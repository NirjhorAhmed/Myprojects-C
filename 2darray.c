#include<stdio.h>

void mul(int i,int j,int k,int l,int arr1[i][j],int arr2[k][l]){
    int p[i][l];
    if(j==k){
        for(int x=0;x<i;x++){
            for(int y=0;y<l;y++){
                p[x][y]=0;
            for(int z=0;z<j;z++){
                p[x][y]+=arr1[x][z]*arr2[z][y];
            }
        }
    }
}
else{
    printf("Multiplication not possible"); 
    return;
}
for(int x=0;x<i;x++){
    for(int y=0;y<l;y++){
        printf("%d ",p[x][y]);
    }
    printf("\n");
}
}
int main()
{
    int i,j,k,l;
    scanf("%d %d %d %d",&i,&j,&k,&l);
    int arr1[i][j],arr2[k][l];
    for(int x=0;x<i;x++){
        for(int y=0;y<j;y++){
            scanf("%d",&arr1[x][y]);
        }
    }
    for(int x=0;x<k;x++){
        for(int y=0;y<l;y++){
            scanf("%d",&arr2[x][y]);
        }
    }
    mul(i,j,k,l,arr1,arr2);
}