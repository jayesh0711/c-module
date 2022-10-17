#include<stdio.h>
long int fact(int n);
long int gcd(int n, int m);
int main()
{
	int n,m;
	printf("enter a number to find its factoeial:");
	scanf("%d",&n);
	printf("enter a number to find its factoeial:");
        scanf("%d",&m);
	printf("the factoeialof number is %d\n",n,fact(n));
          printf("the factoeialof number is %d\n",m,fact(m));
	  printf("the gcd of%d and %d is%ld",n,m,gcd(n,m));
	  return 0;
}
long int fact(int n)
{
	if(n==0||n==1)
		return 1;
	else
		return n*fact(n-1);
}
long int gcd(int n,int m)
{
	if(m==0)
	{
		return n;
	}
	else
	{
		return gcd(m,n%m);
	}
}


