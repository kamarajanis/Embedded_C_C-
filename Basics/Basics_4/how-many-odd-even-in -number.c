#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the Number to Find");
	scanf("%d",&n);
	int e=0,o=0;
	while(n>0)
	{
		int r=r%10;
		n=n/10;
		if(r%2==0)
			e++;
		else
			o++;
	}
	printf("Even is %d\n",e);
	printf("Odd is %d\n",o);

}