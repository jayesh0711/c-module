#include<stdio.h>
int main()
{
	int a[20];
	int n;
	printf("Enter the number of elements to be stored into the array:");
	scanf("%d",&n);
	printf("Enter the elements into array:");
	for(int i=0;i<n;i++)
		scanf(" %d",&a[i]);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
