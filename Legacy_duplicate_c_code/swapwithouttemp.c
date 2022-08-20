#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	printf("Enter the numberes\n");
	scanf("%d%d",&a,&b);//a=2 b=3
	a=a+b;//a=5
	b=a-b;//b=2
    a=a-b;//a=3
	printf("After Swapping");
	printf("%d%d",a,b);
}