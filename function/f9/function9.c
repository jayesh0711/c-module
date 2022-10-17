#include<stdio.h>
void fun(int,int);
void main()
{
	int m,n ;
	printf("enter row and colomns:\n");
	scanf("%d%d",&m,&n);
	fun(m,n);

}
       void fun(int m,int n)
{
	int i,j,matrix[10][10],transpose[10][10];
	printf("enter the element of matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
              for(j=0;j<n;j++)
	      {
                      transpose[j][i]=matrix[i][j];
	      }
	}


	printf("transpose of the element");
	       for(i=0;i<m;i++)
	       {
                 for(j=0;j<n;j++)
		 {
                       printf("%d",transpose[i][j]);
		 }
	       
                      printf("\n");
	       }
}
