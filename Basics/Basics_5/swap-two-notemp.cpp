#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	printf("Enter the two numbers to swap\n");
	scanf("%d%d",&a,&b);
	printf("\nWithout Temp\n");
	printf("\nBefore swapping the numbers are\n");
	printf("%d %d",a,b);
	a=a+b;//a=2+3    a=5
	b=a-b;//a=5-3    b=2
	a=a-b;//a=5-2    a=3
	printf("\nAfter swapping the numbers are\n");
	printf("%d %d",a,b);
}

