#include<stdio.h>
#define n 5
 void main()
{
	int i,fact=1;
	printf("the factorial og the given number");
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}

