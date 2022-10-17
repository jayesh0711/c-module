#include <stdio.h>
int main()
{
	int a[20];
	int n,sum=0,avg;
	scanf("%d",&n);
	for(int i; i< n;i++)
	{
		scanf("%d",&a[i]);
		sum += a[i];
	}
	printf("Sum = %d",sum);
	printf("\nAvg = %.2f",(float)sum/n);
	return 0;
}

