#include<stdio.h>

int main(){
   FILE *fptr;
   fptr=fopen("file2.txt","a");
    if(fptr==NULL){
        printf("ERROR! FILE NOT FOUND\n");
        return 1;
    }
    fprintf(fptr,"My life fucking rocks\n");
    fclose(fptr);
}