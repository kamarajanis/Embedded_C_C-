#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the number to find the factorial\n");
	scanf("%d",&n);
	//factorial of a number 
	int i;
	int result;
	for(i=1;i<=n;i++)
	{
		result=result*i;
	}
	printf("The Factorial of a number is %d",result);
	
	
	
}
