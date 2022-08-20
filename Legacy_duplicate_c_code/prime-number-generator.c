#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the Limit to Generate\n");
	scanf("%d",&n);
	printf("The Entered Limit is %d\n",n);
	int i;
	printf("2");
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			printf("Not Prime\n"); 
		else
			printf("Prime\n");  break;

	}
}