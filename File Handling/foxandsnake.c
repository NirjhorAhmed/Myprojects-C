#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,m,i;
    scanf("%d %d", &n, &m);
    int **a = (int **)malloc(n * sizeof(int *));
    for(i = 0; i < n; i++){
        a[i] = (int *)malloc(m * sizeof(int));
    }
    for(i=1; i <= n; i++){
        if(i%2==1){
            for(int j=0;j<m;j++){
                printf("#");
            }
            printf("\n");
        }
        else if((i/2)%2==1){
            for(int j=1;j<m;j++){
                printf(".");
            }
            printf("#\n");
        }
        else{
            printf("#");
            for(int j=1;j<m;j++){
                printf(".");
            }
            printf("\n");
        }
    }
    for(i = 0; i < n; i++){
        free(a[i]);
    }

}