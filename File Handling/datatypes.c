#include<stdio.h>

int count_bit(unsigned long long n){
    int count=0;
    while(n){
        n>>=1;
        count++;
    }
    return count;
}

int main()
{
    unsigned char uc=0;
    unsigned short us=0;
    unsigned int ui=0;
    unsigned long ul=0;
    unsigned long long ull=0;

    uc=~uc;
    us=~us;
    ui=~ui;
    ul=~ul;
    ull=~ull;

    printf("unsigned char: %d",count_bit(uc));
    printf("\nunsigned short: %d",count_bit(us));
    printf("\nunsigned int: %d",count_bit(ui));
    printf("\nunsigned long: %d",count_bit(ul));
    printf("\nunsigned long long: %d",count_bit(ull));
    return 0;
}