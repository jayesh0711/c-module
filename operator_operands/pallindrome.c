#include<stdio.h>
 int main()
{
	int n,n1 ,rev=0 ,rem;
	printf("enter the number ");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		rem = n%10;
		rev=rev*10 +rem;
		n =n/10;
	}
	if(n1==rev)
	{
		printf("the given number is armstrong num");
	}
	else
	{
		printf("the given number is not armstrong number");
	}
	return 0;
}
