#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the array size\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array Elements");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int s;
	printf("Enter the Elements to Search in an array");
	scanf("%d",&s);
	//flag --indication of element found
	int f=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			f=1;
			printf("Element Found at index %d",i);
			exit(0);
		}
	}
	if(f==0)
	{
		printf("Element Not Found");
	}
	
	
	
	
	
	
	
	
	
	
	
}
