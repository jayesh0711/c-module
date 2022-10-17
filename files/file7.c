#include<stdio.h>
 int main()
{
	int a[25],n,i;
	float avg=0 ,sum=0;
	printf( "enter the number of element ");
	scanf("%d ",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum =sum+a[i];
		avg=sum/n;
	}
	printf("the sum of the array is %f",sum);


	printf("the avg of array is %f",avg);
	return 0;
}
