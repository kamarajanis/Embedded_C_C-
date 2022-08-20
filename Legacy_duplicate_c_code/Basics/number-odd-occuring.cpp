#include<stdio.h>
#include<stdlib.h>
int main()
{
	//number occuring odd number of times
	int n;
	printf("Enter the array size\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array Elements\n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int j,c=0,f=0;
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c=c+1;
			}
		}
		printf("\n%d\n",c);
		if(c>1 && c%2!=0)
		{
			f=1;
			printf("Number Occuring odd Element is %d\n",a[i]);
			exit(0);
		}
	}
	if(f==0)
	{
		printf("No Element Occuring Odd Number of times\n");
	}
}
