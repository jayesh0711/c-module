#include<stdio.h>
void main()
{
	int r1,r2,r3,n,r,i;
	printf("enter the the value of n and r");
	scanf("%d%d",&n,&r);
	r1=r2=r3=1;
	for(i=n;i>1;i--)
	{
		r1=r1*i;
	}
	for(i=n-r;i>1;i--)
	{
		r2*=i;
	}
	r3=r1/r2;
	printf("result%d",r3);
}
