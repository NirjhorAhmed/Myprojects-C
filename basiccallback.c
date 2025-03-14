#include<stdio.h>

void a(){
    printf("Hello from A\n");
}

void b(void (*ptr)()){
    (*ptr)();
}

void main(){
    void(*ptr)()=&a;
    b(ptr);
}