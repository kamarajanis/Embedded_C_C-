#include<stdio.h>
#include<stdlib.h>
int main()
{
	//get a n value number of elements
	int n;//declare a variable n for storing
	
	printf("Enter the number of elements to get\n");
	
	//getting data and %d is format specifier and data type
	//&n gives the location to variable to store the data 
	scanf("%d",&n);
	
	//declare an array of elements with size as given by the user 
	int a[n];
	printf("Enter the elements one by one\n");
	
	//declare i as iteratot in for loop
	//index starts with 0
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter the Element ....... \n");
		scanf("%d",&a[i]);
	}
	
	//after getting the elements from the array use printf
	//to print the array
	
	
	//it will loop through the array and print one by one
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);  // %d is format specifier for the integer
	}	
}
