#include<stdio.h>
void main()
{
	int n,c;
	scanf(" %d",&n);
	for(int i=1;i<=n;i++)
	{
		c=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j == 0)
				c++;
		}
		if (c==2)
			printf("%d ",i);
	}
}
