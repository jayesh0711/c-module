#include<stdio.h>
void main()
{
	int n,fact=1;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(int i=n;i>0;i--)
	{
		fact=fact*i;
	}
	printf("Factorial = %d",fact);
} 

