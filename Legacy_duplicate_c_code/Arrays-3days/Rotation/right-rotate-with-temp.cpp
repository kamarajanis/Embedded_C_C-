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
	
	//using the temp array to  right rotate
	int temp[n];
	int j=0;
	for(i=k;i<n;i++)
	{
		temp[j]=a[i];
		j++;
	}
	for(i=0;i<k;i++)
	{
		temp[j]=a[i];
		j++;	
	}
	
		//////////////////////////   printting ////////////////////////////////
	printf("\nAftert Rotation  the Entered Elements are\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",temp[i]);
	}
	
}
