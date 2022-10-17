#include<stdio.h>
int main()
{
	int p,t,r;
	float i;
	printf("Enter the values p,t,r"); 
	scanf("%d,%d,%d",&p,&t,&r);
	i = (float)(p*t*r)/100;
	printf("Simple Interest = %0.2f",i);
}

