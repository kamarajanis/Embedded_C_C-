#include<stdio.h>
#include<stdlib.h>
int main()
{
	//check the pair that equals to the sum
	int n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements\n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the sum values x\n");
	int x,j,f=0;
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]+a[j]==x)
			{ 
				f=1;
				printf("Sum Found at index %d and %d",i,j);
				exit(0);
			}
		}
	}
	if(f==0)
	{
		printf("Element Nort Found");
	}
}
