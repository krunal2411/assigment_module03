//Write a program of Multiplication make Subtraction of two matrix using 2-D Array

#include <stdio.h>  
   
int main()  
{  
    int rows, cols;  
          
    //Initialize matrix a  
    int a[][3] = {  
                    {4, 5, 6},  
                    {3, 4, 1},  
                    {1, 2, 3}  
                 };  
      
    //Initialize matrix b  
    int b[][3] = {  
                      {2, 0, 3},  
                     {2, 3, 1},  
                     {1, 1, 1}  
                 };   //Calculates number of rows and columns present in given matrix  
    rows = (sizeof(a)/sizeof(a[0]));  
    cols = (sizeof(a)/sizeof(a[0][0]))/rows;  
      
    //Array diff will hold the result  
    int diff[rows][cols];  
      
    //Performs subtraction of matrices a and b. Store the result in matrix diff  
    for(int i = 0; i < rows; i++){  
        for(int j = 0; j < cols; j++){  
            diff[i][j] = a[i][j] - b[i][j];  
        }  
    }  
      
    printf("Subtraction of two matrices: \n");  
    for(int i = 0; i < rows; i++){  
        for(int j = 0; j < cols; j++){  
           printf("%d ", diff[i][j]);  
        }  
        printf("\n");  
    }  
   
    return 0; 
	 }
