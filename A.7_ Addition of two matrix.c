//Write a program of two make Addition of two matrix using 2-D Array.

#include<stdio.h>
int main()
{
  int r,c,a[10][10],i,j,b[10][10],t[10][10];
  printf("\nEnter the row limit:");
  scanf("%d",&r);
  printf("\nEnter the column limit:");
  scanf("%d",&c);
  printf("\nEnter the values:");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
 for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      t[i][j]=a[i][j]+b[i][j];
    }
  }
  printf("Addition Value:\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("\t%d",t[i][j]);
    }
    printf("\n");
  }
  return 0;
}
