#include<stdio.h>
#include<stdlib.h>
int main()
{
	//majority element
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
	int len;
	len=sizeof(a)/sizeof(a[0]);
	printf("The length of array %d\n",len);
	int l=len/2;
	printf("n/2 size is %d\n",l);
	//finding the number of elements of all elements 
	//compare with l value
	int j,c,f=0;
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c=c+1;
				printf("\n%d   %d\n",a[i],a[j]);
			}
		}
		printf("\n%d\n",c);
		if(c>l)
		{
			f=1;
			printf("Majority Element Found %d",a[i]);
			exit(0);
		}
	}
	if(f==0)
	{
		printf("No Majority Element");
	}
	
	
	
	
	
}
