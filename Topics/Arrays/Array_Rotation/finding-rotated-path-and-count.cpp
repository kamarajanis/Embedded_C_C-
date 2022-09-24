#include<stdio.h>
#include<stdlib.h>
void print(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("  %d   ",arr[i]);
	}
	printf("\n");
}
int main()
{
	int n;
	printf("Enter the number of elements of array\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements\n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//////////////////////////   printting ////////////////////////////////
	printf("\nThe Entered Elements are\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	
	 printf("\n\n");
	//maximum while rotating an array
	int suma[n],j,k;
    for(j=0;j<n;j++)
	{
	//rotatiion
	int temp=a[n-1];
	for(i=n-1;i>=0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=temp;
	print(a,n);
	//finding sum after that 
	int sum=0;
	for(k=0;k<n;k++)
	{
		sum=sum+k*a[k];
	}
	printf("\n%d",sum);
	suma[j]=sum;	
	}
	printf("\n");
	print(suma,n);
	//finding greater sum in that array
	int max=suma[0];
	for(i=1;i<n;i++)
	{
		if(suma[i]>max)
		{
			max=suma[i];
		}
	}
	printf("The maximum is %d  ",max);
}

