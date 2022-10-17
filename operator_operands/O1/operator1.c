#include <stdio.h>
void main()
{
	int a,b;
	printf("Enter values of a and b");
	scanf("%d,%d",&a,&b);
	printf("\nSum = %d",a+b);
	printf("\nDifference = %d",a-b);
	printf("\nProduct = %d",a*b);
	printf("\nQuotient = %f",(float)a/b);
	printf("\nReminder = %d",a%b);
}


