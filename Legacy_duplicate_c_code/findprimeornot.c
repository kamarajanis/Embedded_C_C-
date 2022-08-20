#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the Number\n");
	scanf("%d",&n);
	printf("The Entered NUmber is %d\n",n);
	int i,flag=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
        {
             flag=1;
        }
	}
	if(flag)
        printf("Not a prime");
    else
        printf("prime");
}
