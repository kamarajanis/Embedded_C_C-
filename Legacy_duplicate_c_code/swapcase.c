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
	{	//printf("UPPER CASE\n");
         printf("%d\n",b);
         printf("UPPER TO LOWER\n");
         b=b+32;
         printf("%c\n",b);
	}
	else if(b>=97&&b<=122)
	{	//printf("lower\n");
         printf("%d\n",b);
         printf("lower to upper\n");
         b=b-32;
         printf("%c\n",b);
	}
	else
		printf("Wrong!!!!!!! Please Enter a Character\n");

}
