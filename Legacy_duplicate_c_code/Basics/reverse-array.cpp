#include<stdio.h>
#include<stdlib.h>
int main()
{
	//reverse an array
	//AFTER REVERSE COMPARE WITH ORIGINIAL ARRAY 
	//TO CHECK THE PALINDROME OR NOT
	int n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements\n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//printing an array in reverse order
	int len=sizeof(a)/sizeof(a[0]);
	printf("The array length is %d ",len);
	int k=len-1;
	printf("\n%d\n",k);
    int p;
    for(p=k;p>=0;p--)
    {
    	printf("%d",a[p]);
	}
}

