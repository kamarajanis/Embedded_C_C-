#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the number to find the fators\n");
	scanf("%d",&n);
	int i;
	printf("The Factors are ");
	for(i=1;i<=n;i++)
	{
         if(n%i==0)
         {
         	printf("%d  ",i);
         }
	}
	return 0;
}
