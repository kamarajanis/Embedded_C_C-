#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,temp;
	printf("Enter the numberes\n");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("After Swapping");
	printf("%d%d",a,b);
}