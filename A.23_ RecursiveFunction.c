#include<stdio.h>
main()
{
	int i,n;
	
	printf("\n\n\t enter a number to print the table :");
	scanf("%d,&n");
	
	i=1;
	while(i<=10)
	{
		printf("\n\n\t %d *d = %d",n,i,n*i);
		
		i=i+1;
	}
}
