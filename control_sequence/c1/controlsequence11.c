#include<stdio.h>
void main()
{
	int a[10];
	int n;
	for (int i=0;i<10;i++)
	{
		scanf("%d",a+i);
	}
	printf("Enter the number to be searched");
	scanf("%d",&n);
	for (int i=0;i<10;i++)
	{
		if(n == a[i])
		{
			printf("found");
			break;
		}
	}
}
