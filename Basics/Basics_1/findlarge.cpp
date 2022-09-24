#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	printf("Enter three Elements");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%d is Greater",a);
	}
	else if(b>c)
	{
		printf("%d is Greater",b);
	}
	else
	{
		printf("%d is Greater",c);
	}
}
