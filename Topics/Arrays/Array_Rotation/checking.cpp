#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5]={1,2,3,4,5};//array
	
	int *ar[5];//array of pointers 
	int i;
	for(i=0;i<5;i++)
	{
		ar[i]=&a[i];//assign the location to pointers
		//because ar[i] is pointer and pointer stores  the address
	}
	for(i=0;i<5;i++)
	{
		printf(" %d ",*ar[i]);//printing the values at pointer location
		//this is using *operator 
		printf(" %d ",ar[i]);
		//printing the pointers so it print its location
	}
	int le=sizeof(a)/sizeof(a[0]);
	int len=sizeof(ar)/sizeof(ar[0]);
	printf("\n%d     %d",le,len);
}
