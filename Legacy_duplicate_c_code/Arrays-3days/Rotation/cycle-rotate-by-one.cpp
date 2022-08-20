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
	 
    //cycle rotate by one  
    int temp=a[n-1];
    for(i=n-1;i>=0;i--)
    {
		a[i]=a[i-1];
	}
	a[0]=temp;
	
	//////////////////////////   printting ////////////////////////////////
	printf("\nAftert Rotation  the Entered Elements are\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	
}
