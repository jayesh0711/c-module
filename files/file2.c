#include<stdio.h>
 int main()
{
	int a[25],n,i;
	float avg=0 ,sum=0;
	printf( "enter the number of element ");
	scanf("%d ",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);   //read the formatted output from the keyword
	}
	for(i=1;i<=n;i++)
	{
		sum =sum+a[i];     //add the number of array
		avg=sum/n;    // avg of given numberwhich is present in the array
	}
	printf("the sum of the array is %f",sum);


	printf("the avg of array is %f",avg);
	return 0;
}
