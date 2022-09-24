#include<stdio.h>
#include<stdlib.h>
int main()
{
	/*
	          *
	         ***
	        *****
	*/
	int i,j,k,p,n;
	printf("Enter the size of the pattern\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)//row
	{
		//for loop for printing spaces 
		//length 5 means 4 spaces 
		for(j=n-1;j>i;j--)//column
		{
			printf(" ");
		}
		//for loop for printing the star patterns after spaces
		for(k=0;k<=i;k++)
		{
			printf("*");
		}
		//same problem printing extra stars after right side 
		for(p=0;p<=i-1;p++)
		{
			printf("*");
		}
		
		printf("\n");
		
	}
	
	
}
