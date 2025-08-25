#include<stdio.h>
#include<string.h>
#include<ctype.h>

void namer(char name[3][100]){
    for(int i=0;i<3;i++){
        printf("Enter name %d: ", i+1);
        scanf("%s", name[i]);
        int flag=0;
        for(int j=0;name[i][j]!='\0';j++){
            if(isalpha(name[i][j])){
                flag=1;
                break;
            }
        }
        if(flag){
            printf("Invalid name %d\n", i+1);   
        }
        else{
        printf("Name %d: %s\n", i+1, name[i]);
        }
    }
}
int main()
{
    char name[3][100];
    namer(name);
    return 0;
}