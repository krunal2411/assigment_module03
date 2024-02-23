//Write a program to append data into already existed file



#include <stdio.h>
#include <stdlib.h>




void readFile(FILE * fPtr);


int main()
{
   
    FILE *fPtr;
    char filePath[100];




    /* Input file path to remove empty lines from user */
    printf("Enter file path: ");
    scanf("%s", filePath);

    /*  Open all file in append mode. */
    fPtr = fopen(filePath, "a");


    /* fopen() return NULL if unable to open file in given mode. */
    if (fPtr == NULL)
    {
        
        printf("\nUnable to open '%s' file.\n", filePath);
        printf("Please check whether file exists and you have write privilege.\n");
        exit(EXIT_FAILURE);
    }


    /* Input data to append from user */
    printf("\nEnter data to append: ");
    fflush(stdin);          // To clear extra white space characters in stdin
 



    fputs(dataToAppend, fPtr);


   
    fPtr = freopen(filePath, "r", fPtr);

   
    printf("\nSuccessfully appended data to file. \n");
    printf("Changed file contents:\n\n");
    readFile(fPtr);


    fclose(fPtr);

    return 0;
}



/**
 * Reads a file character by character 
 * and prints on console.
 * 
 * @fPtr    Pointer to FILE to read.
 */
void readFile(FILE * fPtr)
{
    char ch;

    do 
    {
        ch = fgetc(fPtr);

        putchar(ch);

    } while (ch != EOF);
}
