#include <stdio.h>

int main() {
    char *e = "Hello";  
   // printf("%s\n",*e);
    printf("%c\n",*e);
    printf("%s\n", e);   
    for (int i = 0; e[i] != '\0'; i++) {
        printf("%c\n", e[i]);  
    }
    
    return 0;
}
