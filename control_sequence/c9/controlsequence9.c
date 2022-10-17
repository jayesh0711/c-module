#include<stdio.h>
void main()
{
	int c,d,m,n,a[5][5],b[5][5],t[5][5];
	char s;
	printf("Enter the number of rows in a");
	scanf("%d",&c);
	printf("Enter the number of columns in a");
	scanf("%d",&d);
	printf("Enter the number of rows in b");
	scanf("%d",&m);
	printf("Enter the number of columns in b");
	scanf("%d",&n);
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<d;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<d;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("Enter the choice of operation ");
	scanf(" %c",&s);
	switch(s)
	{
		case '+':
			{
				if(c==m && d==n)
				{				
					printf("The choice is addition and the result is\n");
					for(int i=0;i<m;i++)
					{
						for(int j=0;j<n;j++)
						{
							printf("%d ",a[i][j]+b[i][j]);
						}
						printf("\n");
					}
				}
				else
					printf("Addition impossible");
			}
			break;
		case '-':
			{
				if(c==m && d==n)
				{				
					printf("The choice is subtraction and the result is\n");
					for(int i=0;i<m;i++)
					{
						for(int j=0;j<n;j++)
						{
							printf("%d ",a[i][j]-b[i][j]);
						}
						printf("\n");
					}
				}
				else
					printf("Subtraction impossible");
			}
			break;
		case '*':
			{
				if(c==n)
				{
					printf("The choice is multiplication and the result is\n");
					for(int i=0;i<c;i++)
					{
						
						for(int j=0;j<n;j++)
						{
							t[i][j] = 0;
							for(int k=0;k<m;k++)
								t[i][j] += a[i][k]*b[k][j];
						}
					}
					for(int i=0;i<c;i++)
					{
						for(int j=0;j<n;j++)
						{
							printf("%d ",t[i][j]);
						}
						printf("\n");
					}

				}
				else
				printf("Multiplication impossible");
			}	
			break;
		default: 
			printf("invalid character");

  	}
		
	
}












