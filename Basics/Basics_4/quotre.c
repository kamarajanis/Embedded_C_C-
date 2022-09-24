#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	printf("Enter the elements\n");
	scanf("%d%d",&a,&b);
	printf("Quotient ");
	printf("%d\n",a/b);
	printf("Remainder\n");
	printf("%d",a%b);
}