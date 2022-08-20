#include<stdio.h>
#include<stdlib.h>
int main()
{
	//merge two arrays and sort it out find median
	//median is middle element or average of middle two
	int n1;
	printf("Enter the number of elements\n");
	scanf("%d",&n1);
	int a[n1];
	printf("Enter the array elements\n");
	int i;
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	//second array
	int n2;
	printf("Enter the number of elements\n");
	scanf("%d",&n2);
	int b[n2];
	printf("Enter the array elements\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	//merged array
	int n=n1+n2;
	int f[n];
	for(i=0;i<n1;i++)
	{
		f[i]=a[i];
	}
	int q=n1;
	for(i=0;i<n2;i++)
	{
		f[q]=b[i];
		q++;	
	}
	//printing merged array
	printf("The Merged Array Before Sorting");
	for(i=0;i<n;i++)
	{
		printf("  %d   ",f[i]);
	}
	//sorting
	int j=0;
	//bubble sort at first iteration largest element get last positon
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n-i-1;j++)
		{
			if(f[i]<f[j])
			{
				int temp=f[i];
				f[i]=f[j];
				f[j]=temp;
			}
		}
	}
//	//selection sort at first iteration smallest element get first position 
//	for(i=0;i<n-1;i++)
//	{
//		for(j=i+1;j<n;j++)
//		{
//			if(f[i]>f[j])
//			{
//				int temp=f[i];
//				f[i]=f[j];
//				f[j]=temp;
//			}
//		}
//	}
	printf("\nAfter Sorting\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",f[i]);
	}
	//finding median
	printf("\nThe Length of Merged array is ");
	int s=sizeof(f)/sizeof(f[0]);
	printf("%d\n",s);
	if(s%2!=0)
	{
		int r;
		r=s/2;
		printf("Meian is if  %d ",f[r]);	
	}
	else
	{ 
		int w;
		w=s/2;
		w=w-1;
		printf("\n %d %d ",f[w],f[w+1]);
		printf("Median is else  %d ",(f[w]+f[w+1])/2);
	}
}
