#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1,n2,a;
	printf("Enter your choice\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n");
	scanf("%d",&a);
	printf("Enter the two elements\n");
	scanf("%d%d",&n1,&n2);
	switch(a)
	{
		case 1:
		    printf("ADDITION\n");
		    printf("%d",n1+n2);
		    break;
		case 2:
		    printf("SUBTRACTION\n");
		    printf("%d",n1-n2);
		    break;
		case 3:
            printf("MULTIPLY\n");
            printf("%d",n1*n2);
		    break;
		case 4:
		    printf("DIVISION\n");
		    printf("%d",n1/n2);
		    break;
		default:
		    printf("Enter the correct choice");
	}
	return 0;
}