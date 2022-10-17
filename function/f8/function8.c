#include<stdio.h>
long int fact(long int n);
int main()
{
	long int n,r,d;
	long int c,p;
	printf("enter the number n");
	scanf("%ld",&n);
	  printf("enter the number r");
	  scanf("%ld",&r);
	  d=n-r;
	  p=fact(n)/fact(d);
	  c=fact(n)/fact(r)*fact(d);
	  printf("the value of npr=%ld %ld is:%ld\n", n,r,p);
	    printf("the value of ncr=%ld %ld is:%ld\n", n,r,c);
     
}
long int fact(long int n)
{
	if(n==0||n==1)
		return 1;
	else 
		return n*fact(n-1);
}


