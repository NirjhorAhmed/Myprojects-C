#include<stdio.h>
#include<string.h>

void encrypt(char *str, char key){
    for(int i = 0; str[i] != '\0'; i++){
        str[i] ^= key; 
    }
    printf("Encrypted string: %s\n", str);
    for(int i = 0; str[i] != '\0'; i++){
        str[i] ^= key; 
    }
    printf("Decrypted string: %s\n", str);
}

int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]='\0';
    char key;
    printf("Enter a key character: ");
    scanf(" %c", &key);
    encrypt(str, key);
    return 0;
}