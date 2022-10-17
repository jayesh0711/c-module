#include<stdio.h>
int main()
{
	int a[20],b[20],n,sml=0,pos,i,j,temp;
	printf("enter the number of terms");
	scanf("%d",&n);
	printf("enter the terms");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	        b[i]=a[i];
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i]<=a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("the  array element is\n");
	for(i=1;i<=n;i++)
		printf("%d\n",b[i]);
	       printf("second smallest element is %d\n",a[2]);
	         printf("second largest element is %d",a[n-1]);
		 return (0);
}

