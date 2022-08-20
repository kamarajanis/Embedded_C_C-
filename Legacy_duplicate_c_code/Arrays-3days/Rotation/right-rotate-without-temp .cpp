#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the number of elements of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements\n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//////////////////////////   printting ////////////////////////////////
	printf("\nThe Entered Elements are\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	
	printf("Enter the number of times to rotate an array\n");
	int k;
	scanf("%d",&k);
	
	//without using the temp array to right rotate
	//k times right rotate so store the first element with temp variable
	int j;
	for(i=0;i<k;i++)
	{
		int temp=a[0];
		for(j=0;j<n;j++)
		{
			a[j]=a[j+1];
		}
		a[n-1]=temp;
	}
	
		//////////////////////////   printting ////////////////////////////////
	printf("\nAftert Rotation  the Entered Elements are\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	
}
