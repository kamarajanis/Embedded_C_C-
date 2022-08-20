#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n;
	printf("Enter the size of the pattern");
	scanf("%d",&n);
	for(i=0;i<n;i++)//row
	{
		for(j=0;j<=i;j++)//column
		{
			printf("*");
		}
		printf("\n");
	}
}
