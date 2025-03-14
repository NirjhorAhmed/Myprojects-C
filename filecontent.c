/**
 * C program to read a file and display file contents character by character using fgetc() 
 */

 #include <stdio.h>
 #include <stdlib.h>
 
 
 int main()
 {
     /* File pointer to hold reference to our file */
     FILE * fPtr;
 
     char ch;
 
 
     /* 
      * Open file in r (read) mode. 
      * "data/file1.txt" is complete file path to read
      */
     fPtr = fopen("data/file2.txt", "r");
 
 
     /* fopen() return NULL if last operation was unsuccessful */
     if(fPtr == NULL)
     {
         /* Unable to open file hence exit */
         printf("Unable to open file.\n");
         printf("Please check whether file exists and you have read privilege.\n");
         exit(EXIT_FAILURE);
     }
 
 
     /* File open success message */
     printf("File opened successfully. Reading file contents character by character. \n\n");

     while ((ch = fgetc(fPtr)) != EOF)
     {
         putchar(ch);  // Display character
     }

     fclose(fPtr);
 
 
     return 0;
 }