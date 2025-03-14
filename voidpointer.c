#include<stdio.h>

int main(){
    int a = 1234;
    float b=1.89224;
    char c='E';
    void *vp=&a;
    printf("%d\n",*(int*)vp);
    vp=&b;
    printf("%f\n",*(float*)vp);
    vp=&c;
    printf("%c\n",*(char*)vp);
}