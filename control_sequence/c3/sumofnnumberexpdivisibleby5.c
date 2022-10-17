#include<stdio.h>
 main()
{
	int sum=0 ,i,n ;
	printf("enter the number ");
	scanf("%d", &n);
	for(i=0 ; i<=n ; i++)
	{
		if(i%5 == 0)
		{
	          continue;
		}
		sum = sum+i;
	}
	printf("sum of the numberis %d", sum);
}

