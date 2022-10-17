#include<stdio.h>
void main()
{
	int a,b,n;
	printf("enter the number");
	scanf("%d",&a);
	printf("enter the to the position to set the bit");
	scanf("%d",&n);
	b=1<<(n-1);
	printf("%d",a|b);

}
