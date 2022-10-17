#include<stdio.h>

unsigned int x[8]={10,20,30,40,50};
void main()
{
	printf("%d %d %d %d",x,x+8,sizeof(int),*x);

}
