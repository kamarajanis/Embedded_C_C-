#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the NUmber to sum\n");
	scanf("%d",&n);
	int sum=0;
	while(n<0)
		{
			int r=n%10;
			n=n/10;
			sum=sum+r;
		}
		printf("%d\n",s);
}
