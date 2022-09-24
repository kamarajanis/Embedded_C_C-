#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements\n");
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//bubble sort at first iteration largest element get last positon
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
//	//selection sort at first iteration smallest element get first position 
//	for(i=0;i<n-1;i++)
//	{
//		for(j=i+1;j<n;j++)
//		{
//			if(a[i]>a[j])
//			{
//				int temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//		}
//	}

	printf("\nAfter Sorting the elements are\n");
	for(i=0;i<n;i++)
	{
		printf(" %d \n",a[i]);
	}
}
