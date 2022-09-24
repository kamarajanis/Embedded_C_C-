#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a;
	printf("Enter a character \n");
	scanf("%c",&a);
	printf("The Entered character is %c \n",a);
	int b=(int)a;
	if(b>=65&&b<=90)
		printf("UPPER CASE\n");
	else if(b>=97&&b<=122)
		printf("lower case\n");
	else
		printf("Wrong!!!!!!! Please Enter a Character\n");

}
