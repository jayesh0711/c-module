#include<stdio.h>
int factorial(int);
void main()

{ 
	int number;
	int fact;

	printf("enter the number ");
	scanf("%d" ,&number);
	fact = factorial(number);
	printf(" factorial of %d is %d",number,fact);

}
     int factorial(int n)
{ 
	if(n>0) 
		return (n*factorial(n-1));

	else
		return 1;
}
			

