#include<stdio.h>
#define n 5
int main()
{
	int originalarray[10]={1,2,3,4,5,6,7,8,9,0};
	int copiedarray[10];
	int loop,count ;	
	for(loop=0,count=9;loop<10;loop++)
	{
		copiedarray[count]=originalarray[loop];
		count--;
	}
	printf("original copied");
	for(loop=0;loop<10;loop++)
	{
		printf("%d %d \n",originalarray[loop] ,copiedarray[loop]);
	}
	return 0;
}

	
	
	/*
	int a[n],b[n],i,j;
	printf ("enter the the number%d",n);
	for(i=0;i<n;i++)
		sacnf("%d",&a[i]);
	printf("copying the the element in reverse order");
	for(i=n-1,j=0;i>=0;i--,j++)

         */
