#include <stdio.h>
void main()
{
	int a,b;
	char s;
       printf("Enter the numbers a,b:");
       scanf("%d,%d",&a,&b);
	printf("Enter the choice of operation:");
	scanf(" %c",&s);
	switch(s)
	{
		case '+':
			printf("Choice is sum and sum is %d",a+b);
			break;
		case '-':
			printf("Choice is difference and difference is %d",a-b);
			break;
		case '*':
			printf("Choice is multiplication and product is %d",a*b);
			break;
		default:
			printf("Invalid choice");

	}
}


