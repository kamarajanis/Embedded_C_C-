#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	printf("Enter two number to swap\n");
	scanf("%d%d",&a,&b);
	printf("Before swapping the numbers are");
	printf("%d%d",a,b);
	//using the temp variable
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swapping the variables are\n");
	printf("%d%d",a,b);
}
