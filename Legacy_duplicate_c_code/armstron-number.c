#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the NUmber to check for armstrong\n");
	scanf("%d",&n);
	int sum=0;
	int temp=n;
	while(n>0)
		{
			int r=0;
			r=n%10;
			n=n/10;
			int c=0;
			c=r*r*r;
			printf("\t%d\t",c);
			sum=sum+c;
		}
		printf("\n");
if(sum==temp)
	{
		printf("Yes it is armstrong NUmber \n %d\n",temp);
    }
else
  {
	    	printf("NO it is not a armstrong NUmber \n %d\n",temp);
   }
}
