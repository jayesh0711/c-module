#include<stdio.h>
void main()
{
	int count= 1, sum=0, num ;
	printf("enter the number");
	scanf("%d", &num);
	while(count<=num)
	{
		if(count % 2 != 0)
		{
		       	sum = sum+count;
		}
		count++;
	}
	printf("sum of odd number is %d",sum);
}
