#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a;
	scanf("%c",&a);
	//printf("%c",a);
	if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
	{
	    printf("Vowel");
	}
	else
	{
	    printf("Cononant");
	}
}