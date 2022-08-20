#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	printf("Enter the fibonacii upto number\n");
	scanf("%d",&n);
	int a=0,b=1;
	printf("%d\n%d\n",a,b);
	for(i=2;i<n;i++)
	{
		int sum=0;
		sum=a+b;
		printf("%d\n",sum);
		a=b;
		b=sum;
		
	}
}
