#include<stdio.h>
#include<stdlib.h>
int main()
{

	char c[10];
	printf("Enter a String\n");
	scanf("%s",c);
	printf("The Entered String is\n");
	printf("%s\n",c);
	printf("\n");
	int i;
	int len=0;
	for(i=0;c[i]!='\0';i++)
	{
		len++;
	}
	printf("%d\n",len);
	int j;
	for(j=len-1;j>=0;j--)
	{
		printf("%c",c[j]);
	}

}
