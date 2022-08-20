#include<stdio.h>
#include<stdlib.h>
int main()
{

	int c;
	printf("Enter a Number\n");
	scanf("%d",&c);
	printf("The Entered Number is %d\n",c); 
	int i,sum=1;
	for(i=1;i<c;i++)
	{
         sum=sum*i;
	}
	printf("Factorial value is %d\n",sum);

}