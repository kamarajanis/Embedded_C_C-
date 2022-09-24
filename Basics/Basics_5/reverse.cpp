#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	int r=0;//store the reverse digit 
	printf("Enter the number to reverse\n");
	scanf("%d",&a);
	int temp=a;
	while(temp!=0)
	{
		int a;
		a=temp%10;//it gives the remainder
		temp=temp/10;//it divides until zero
		//printf("%d",r);
		r=r*10+a;
	}
	printf("The reverse Number is %d",r);
	
}
