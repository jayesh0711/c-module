#include<stdio.h>
main()
{
	int n,num;
	printf("enter the bit integer number");
	scanf("%d",&num);
	printf("enter the bit position to checkwhether is set or not");
	scanf("%d",&n);
	if(num &(1<<n))
		printf("bit number %d is set number%d.\n",n,num);
	else
		  printf("bit number %d is not set in number%d.\n",n,num);
}


