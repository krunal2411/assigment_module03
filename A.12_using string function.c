//Write aprogram to find ou tthe length of given string without using string function

#include <stdio.h>
int main()
{
    char str[100];
    int i,length=0;
    
    printf("Enter a string: \n");
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++)
    {
        length++; 
    }
    
    printf("\nLength of input string: %d",length);
     return 0;
}