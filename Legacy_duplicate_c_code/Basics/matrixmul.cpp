#include<stdio.h>
#include<stdlib.h>
int main()
{
	//matrix multiplication
	printf("Enter the dimensions of first matrix\n");
	int p,q;
	scanf("%d%d",&p,&q);
	printf("Enter the dimensions of second matrix\n");
	int r,s;
	scanf("%d%d",&r,&s);
	//finding the matrix multiplication is possible or not
	if(r==s)
	{
		printf("Matrix Multiplication is possible\n");
	}
	else
	{
		printf("Matrix Multiplication is not possible");
		exit(0);//this will exit from the main program
	}
	
	
	int a[p][q],b[r][s];//two dimension
	printf("Enter the values of matrix1\n");
	int i,j;
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the values of matrix2\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<s;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}	
	printf("\n\nThe Entered Elements of matrix 1\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d",a[i][j]);
		}
	}
	printf("\n\nThe Entered Elements of matrix 2\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<s;j++)
		{
			printf("%d",b[i][j]);
		}
	}
	printf("\n\n");
	printf("Add the matrix and store it in another array");
	int c[q][r],k;
	for(i=0;i<q;i++)
	{
		for(j=0;j<r;i++)
		{
			for(k=0;k<q;k++)
			{
				c[i][j]=a[i][k]+b[k][j];
			}
		}
	}
	printf("The Resultant Matrix is\n\n");
		for(i=0;i<q;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d",c[i][j]);
		}
	}		
}
