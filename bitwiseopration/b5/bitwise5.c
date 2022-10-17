#include<stdio.h>
void main()
{
	int n,position,b;
	printf("enter the number");
		scanf("%d",&n);
		printf("enter the position");
		scanf("%d",&position);
		b=(~(1<<position)&n);
				printf("the clear set is %d",b);
				}

