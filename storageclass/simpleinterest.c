#include<stdio.h>
void main ()
{
	int p,t,r ;
	float i ;
	printf("Enter the money p");
	scanf("%d", &p);
	printf("enter the rate") ;
	scanf("%d", &r) ;
	printf("enter the time") ;
	scanf("%d", &t) ;
	i=(p*r*t)/100 ;
	printf("your simple interest is %.2f", i) ;
}
