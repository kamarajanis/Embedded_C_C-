#include<stdio.h>
#include<stdlib.h>
int i,j;
void reverse(int arr[],int n)
{
		int tempa[n];
		for(i=0;i<n;i++)
		{
			tempa[i]=arr[i];
		}
		j=0;
		for(i=n-1;i>=0;i--)
		{
			arr[j]=tempa[i];
			j++;
		}
}
void print(int arr[],int n)
{
	//////////////////////////   printting ////////////////////////////////
	printf("\nAftert Rotation  the Entered Elements are\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
}

//merge a with b in a array
void merge(int a[],int b[],int c[],int n1,int n2,int n)
{
	int j=0;
	for(i=0;i<n1;i++)
	{
		c[j]=a[i];
		j++;
	}
	for(i=0;i<n2;i++)
	{
		c[j]=b[i];
		j++;
	}
	
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
	
	printf("\nEnter the number of times to reverse an array\n");
	int k;
	scanf("%d",&k);
	
	//reversal algorithm implementation
	//function to rotate an array

	
	
	
	int temp1[k],temp2[n-k],temp[n];
	for(i=0;i<k;i++)
	{
		temp1[i]=a[i];	
	}
	int j=0;
	for(i=k;i<n;i++)
	{
		temp2[j]=a[i];
		j++;
	}
	
	
	print(temp1,k);
	printf("\n");
	reverse(temp1,k);
	print(temp1,k);
	
	print(temp2,n-k);
	printf("\n");
	reverse(temp2,n-k);
	print(temp2,n-k);
	
	
	merge(temp1,temp2,temp,k,n-k,n);
	reverse(temp,n);
	print(temp,n);

	
}
