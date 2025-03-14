#include<stdio.h>
 
void a(){
    printf("Hello from a\n");
}
void b(){
    printf("Life sucks\n");
}
void c(void(*ptr)()){
    (*ptr)();
}
void main()
{
    void (*ptr)();
    char i;
    scanf("%c",&i); 
    if(i=='a'){
        ptr=&a;
    }   
    else{
        ptr=&b;
    }
    c(ptr);
}