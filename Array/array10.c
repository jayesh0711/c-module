#include<stdio.h>
main()
{
	long int arr[10],even[10],odd[10];
	int i,j=0,k=0,n;
	printf("enter the the size of the array");
	scanf("%d",&n);
	printf("enter the element of the array");
	for(i=0;i<n;i++)
	{
		scanf("%ld",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			even[j]=arr[i];
			j++;
		}
		else
		{
			odd[k]=arr[i];
			k++;
		}
	}
	printf("enter the element of even are");
	for(i=0;i<j;i++)
	{
		printf("%ld\n",even[i]);
	}
	printf("the element of odd are");
	for(i=0;i<k;i++)
	{
		printf("%ld",odd[i]);
	}
}

