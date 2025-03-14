#include <stdio.h>

void printbinary(int n){
    if(n>1){
        printbinary(n/2);
    }
printf("%d", n%2);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printbinary(n);
    return 0;
}
