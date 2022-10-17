#include<stdio.h>
main()
{
	int a[100],b[100],i,j,n,c=0;
	printf("enter the size of the array");
	scanf("d",&n);
	printf("the element in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		c=1;
			if(a[i]!=0)
			{
				for(j=i+1;j<=n;j++)
				{
					if(a[i]==a[j])
					{
						c++;
						a[j]=-1;
					}
				}

			}
	}
	 for(i=0;i<=n;i++)
	 {
		 if(a[i]!=-1)
		 {
			 printf("number of %d is%d", a[i],b[i]);
		 }
	 }
	} 

