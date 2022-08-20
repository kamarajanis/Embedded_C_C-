#include<stdio.h>
#include<stdlib.h>
int main()
{
	//take the input from the user and sum it and print it out
	int a,b,sum;
	printf("Enter the two numbers to find the sum\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("The sum is %d",sum);
	getchar();
}
