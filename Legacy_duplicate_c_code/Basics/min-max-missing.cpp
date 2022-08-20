#include<stdio.h>
#include<stdlib.h>
int main()
{
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
	int miss;
	int max=a[0],min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("Maximum Element is \n%d\n",max);
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Minimum Element is \n%d\n",min);
	int k=0,f=0;
	for(i=min;i<max;i++)
	{
		if(a[k]!=i)
		{
			f=1;
			printf("The missed elements is %d",i);
			exit(0);
		}
		k++;
	}
	if(f==0)
	{
		printf("No Elements has missed out");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
